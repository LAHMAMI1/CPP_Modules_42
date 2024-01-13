/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:58:27 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/13 13:37:48 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Orthodox Canonical Form
BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &bitcoinExchange) { *this = bitcoinExchange; }

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &bitcoinExchange)
{
    if (this != &bitcoinExchange)
       this->_inputData = bitcoinExchange._inputData;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

// Member functions
void BitcoinExchange::execution(char **av)
{
    csvFile();
    inputFile(av);
}

void BitcoinExchange::printData(std::string line, float value)
{
    std::map<std::string, float>::iterator it = _inputData.lower_bound(line);
    if (it->first == line)
        std::cout << line << " => " << value << " = " << value * it->second << std::endl;
    else if (it != _inputData.begin())
    {
        --it;
        std::cout << line << " => " << value << " = " << value * it->second << std::endl;
    }
}

// member file functions
void BitcoinExchange::csvFile()
{
    std::ifstream dataFile("data.csv");
    if (!dataFile.is_open())
        throw std::runtime_error("Error: Cannot open data.csv");
    if (dataFile.peek() == std::ifstream::traits_type::eof())
        throw std::runtime_error("Error: data.csv is empty");
    std::string dataLine;
    if (std::getline(dataFile, dataLine) && (dataLine != "date,exchange_rate" || dataLine.empty()))
        throw std::runtime_error("Error: first line = date,exchange_rate");

    while (std::getline(dataFile, dataLine))
    {
        if (dataLine.length() < 12 || dataLine.substr(10, 1) != ",")
            throw std::runtime_error("Error: invalid data.csv format");
        dateChecker(dataLine, "data.csv");
        valueChecker(dataLine.substr(11), false, "data.csv");
        _inputData[dataLine.substr(0, 10)] = atof(dataLine.substr(11).c_str());
    }
    dataFile.close();
}

void BitcoinExchange::inputFile(char **av)
{
    std::string inputName = av[1];
    if (inputName.length() < 4 || inputName.substr(inputName.length() - 4) != ".txt")
        throw std::runtime_error("Error: input file must be a .txt file: " + inputName);

    std::ifstream inputFile(inputName.c_str());
    if (!inputFile.is_open())
        throw std::runtime_error("Error: Cannot open input file: " + inputName);
    if (inputFile.peek() == std::ifstream::traits_type::eof())
        throw std::runtime_error("Error: input file is empty: " + inputName);

    std::string inputLine;
    if (std::getline(inputFile, inputLine) && (inputLine != "date | value" || inputLine.empty()))
        throw std::runtime_error("Error: first line = date | value");

    while (std::getline(inputFile, inputLine))
    {
        try
        {
            if (inputLine.length() < 14 || inputLine.substr(10, 3) != " | ")
                throw std::runtime_error("Error: invalid input file format: " + inputLine);

            dateChecker(inputLine, inputName);
            valueChecker(inputLine.substr(13), true, inputName);

            printData(inputLine.substr(0, 10), atof(inputLine.substr(13).c_str()));
        }
        catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
    }
    inputFile.close();
}

// file checkers
void BitcoinExchange::dateChecker(std::string line, std::string fileName)
{
    std::string date = line.substr(0, 10);

    struct tm tm;
    if (!strptime(date.c_str(), "%Y-%m-%d", &tm)
        || (atoi(date.substr(8).c_str()) > 31 || atoi(date.substr(8).c_str()) < 1))
        throw std::runtime_error("Error: invalid date format: " + date + " in: " + fileName);
}

void BitcoinExchange::valueChecker(std::string value, bool tf, std::string fileName)
{
    if (isspace(value[0]))
        throw std::runtime_error("Error: begining space value: " + value + " in: " + fileName);
    std::istringstream iss(value);
    float floatValue;
    char leftover;
    if (!(iss >> floatValue) || (iss >> std::noskipws >> leftover >> std::skipws && leftover != 'f' && !isspace(leftover)))
        throw std::runtime_error("Error: invalid value: " + value + " in: " + fileName);
    if (iss >> leftover)
        throw std::runtime_error("Error: invalid value: " + value + " in: " + fileName);
    if ((floatValue < 0 || floatValue > 1000) && tf == true)
        throw std::runtime_error("Error: value out of range: " + value + " in: " + fileName);
}
