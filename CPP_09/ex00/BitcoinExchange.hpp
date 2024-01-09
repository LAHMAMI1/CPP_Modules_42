/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:58:20 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/09 17:50:44 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <map>
#include <ctime>

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
        int readData(char **av);
};
