/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:58:27 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/11 17:57:05 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// BitcoinExchange::BitcoinExchange() {}

// BitcoinExchange::BitcoinExchange(const BitcoinExchange &bitcoinExchange) {}

// BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &bitcoinExchange) {}

// BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::readData(char **av)
{
    std::string inputName = av[1];
    if (inputName.length() < 4 || inputName.substr(inputName.length() - 4) != ".txt")
        throw std::runtime_error("Error: input file must be a .txt file");
    std::ifstream inputFile(inputName.c_str());
    if (!inputFile.is_open())
        throw std::runtime_error("Error: Cannot open input file");
    if (inputFile.peek() == std::ifstream::traits_type::eof())
        throw std::runtime_error("Error: input file is empty");
    std::string line;
    if (std::getline(inputFile, line) && (line != "date | value" || line.empty()))
        throw std::runtime_error("Error: first line = date | value");

    while (std::getline(inputFile, line))
    {
        try
        {
            if (line.length() < 14 || line.substr(10, 3) != " | ")
                throw std::runtime_error("Error: invalid input file format");

            dateChecker(line);

            valueChecker(line);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    inputFile.close();
}

// input file checkers
void BitcoinExchange::dateChecker(std::string line)
{
    std::string date = line.substr(0, 10);

    struct tm tm;
    if (!strptime(date.c_str(), "%Y-%m-%d", &tm)
        || (atoi(date.substr(8).c_str()) > 31 || atoi(date.substr(8).c_str()) < 1))
        throw std::runtime_error("Error: invalid date format");
}

void BitcoinExchange::valueChecker(std::string line)
{
    std::string value = line.substr(13);
    if (isspace(value[0]))
        throw std::runtime_error("Error: invalid value");
    std::istringstream iss(value);
    float floatValue;
    char leftover; 
    if (!(iss >> floatValue) || (iss >> std::noskipws >> leftover >> std::skipws && leftover != 'f' && !isspace(leftover)))
        throw std::runtime_error("Error: invalid value");
    if (iss >> leftover)
        throw std::runtime_error("Error: invalid value");
    if (floatValue < 0 || floatValue > 1000)
        throw std::runtime_error("Error: value out of range");
}