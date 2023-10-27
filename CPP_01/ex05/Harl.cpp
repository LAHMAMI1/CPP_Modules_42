/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 02:16:14 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/26 19:18:29 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBUG]\nI love having extra bacon for my burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money." << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    this->ptrFun[0] = &Harl::debug;
    this->ptrFun[1] = &Harl::info;
    this->ptrFun[2] = &Harl::warning;
    this->ptrFun[3] = &Harl::error;

    std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == lvl[i])
        {
            (this->*ptrFun[i])();
            return ;
        }
    }
    std::cout << "NOT A VALID LEVEL" << std::endl;
}