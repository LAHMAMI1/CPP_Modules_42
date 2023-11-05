/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 05:19:52 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/05 05:30:03 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_name = "default (FragTrap)";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Default Constructor called (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap& FragTrap) : ClapTrap(FragTrap)
{
    std::cout << "Copy Constructor called (FragTrap)" << std::endl;
    *this = FragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap& FragTrap)
{
    if (this != &FragTrap)
    {
        this->_name = FragTrap._name;
        this->_hitPoints = FragTrap._hitPoints;
        this->_energyPoints = FragTrap._energyPoints;
        this->_attackDamage = FragTrap._attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called (FragTrap)" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Constructor with name called (FragTrap)" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " wants to high five" << std::endl;
}