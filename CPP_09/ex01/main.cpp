/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:30:22 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/14 11:58:39 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cerr << "Error: Invalid num of arguments" << std::endl, 1);
    
    try
    {
        RPN rpn;
        rpn.result(av[1]);
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
    
    return (0);
}