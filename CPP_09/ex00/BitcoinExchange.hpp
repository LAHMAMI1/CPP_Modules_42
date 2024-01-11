/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:58:20 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/11 17:54:01 by olahmami         ###   ########.fr       */
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
        std::map<std::string, double> _inputData;
    public:
        // // Orthodox Canonical Form
        // BitcoinExchange();
        // BitcoinExchange(const BitcoinExchange &bitcoinExchange);
        // BitcoinExchange &operator=(const BitcoinExchange &bitcoinExchange);
        // ~BitcoinExchange();

        // Member functions
        void readData(char **av);
        // input file checkers
        void dateChecker(std::string line);
        void valueChecker(std::string line);
};
