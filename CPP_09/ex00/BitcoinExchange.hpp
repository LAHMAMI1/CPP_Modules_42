/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:58:20 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/13 13:38:47 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <ctime>
#include <cstdlib>
#include <sstream>

class BitcoinExchange
{
    private:
        std::map<std::string, float> _inputData;

    public:
        // Orthodox Canonical Form
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &bitcoinExchange);
        BitcoinExchange &operator=(const BitcoinExchange &bitcoinExchange);
        ~BitcoinExchange();

        // Member functions
        void execution(char **av);
        void printData(std::string line, float value);
        // member file functions
        void csvFile();
        void inputFile(char **av);
        // file checkers
        void dateChecker(std::string line, std::string fileName);
        void valueChecker(std::string value, bool tf, std::string fileName);
};
