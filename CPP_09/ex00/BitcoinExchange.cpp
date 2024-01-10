/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:58:27 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/10 13:52:50 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// BitcoinExchange::BitcoinExchange() {}

// BitcoinExchange::BitcoinExchange(const BitcoinExchange &bitcoinExchange) {}

// BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &bitcoinExchange) {}

// BitcoinExchange::~BitcoinExchange() {}

int BitcoinExchange::readData(char **av)
{
    std::string inputName = av[1];
    //check if filename end with .txt
    if (inputName.length() < 4 || inputName.substr(inputName.length() - 4) != ".txt")
        return (std::cerr << "Error: input file must be a .txt file" << std::endl, 1);
    std::ifstream inputFile(inputName.c_str());
    // chack if inputFile is open
    if (!inputFile.is_open())
        return (std::cerr << "Error: Cannot open input file" << std::endl, 1);
    // check if inputFile is empty
    if (inputFile.peek() == std::ifstream::traits_type::eof())
        return (std::cerr << "Error: input file is empty" << std::endl, 1);
    std::string line;
    if (std::getline(inputFile, line) && (line != "date | value" || line.empty()))
        return (std::cerr << "Error: first line = date | value" << std::endl, 1);
    while (std::getline(inputFile, line))
    {
        if (line.length() < 14 || line.substr(10, 3) != " | ")
            return (std::cerr << "Error: invalid input file format" << std::endl, 1);

        std::string date = line.substr(0, 10);
        struct tm tm;
        if (!strptime(date.c_str(), "%Y-%m-%d", &tm))
            return (std::cerr << "Error: invalid date format" << std::endl, 1);
        if (atoi(date.substr(8).c_str()) > 31 || atoi(date.substr(8).c_str()) < 1)
            return (std::cerr << "Error: invalid date format" << std::endl, 1);

        std::string value = line.substr(13);
        std::istringstream iss(value);
        float floatValue;
        char leftover;
        if (!(iss >> floatValue) || (iss >> leftover && leftover != 'f'))
            return (std::cerr << "Error: invalid value" << std::endl, 1);
        if (floatValue < 0 || floatValue > 1000)
            return (std::cerr << "Error: value out of range" << std::endl, 1);
    }
    
    return (std::cout << "Success: input file is valid" << std::endl, 0);
}