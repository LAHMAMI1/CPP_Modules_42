/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:58:30 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/14 12:46:55 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cerr << "Error: Invalid num of arguments" << std::endl, 1);

    try
    {
        BitcoinExchange bitcoinExchange;
        bitcoinExchange.execution(av);
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

    return (0);
}