/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:38:37 by olahmami          #+#    #+#             */
/*   Updated: 2024/02/02 12:37:04 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
        return (std::cout << "Error" << std::endl, 1);

    try
    {
        PmergeMe pm;
        pm.execution(ac, av);
    }
    catch(const std::exception& e) { std::cout << e.what() << std::endl; }

    return (0);
}
