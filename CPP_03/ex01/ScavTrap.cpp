/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:55:37 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/05 05:09:31 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_name = "default (ScavTrap)";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Default Constructor called (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ScavTrap) : ClapTrap(ScavTrap)
{
    std::cout << "Copy Constructor called (ScavTrap)" << std::endl;
    *this = ScavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& ScavTrap)
{
    if (this != &ScavTrap)
    {
        this->_name = ScavTrap._name;
        this->_hitPoints = ScavTrap._hitPoints;
        this->_energyPoints = ScavTrap._energyPoints;
        this->_attackDamage = ScavTrap._attackDamage;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Constructor with name called (ScavTrap)" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead or has no energy points" << std::endl;
        return ;
    }
    std::cout << "(ScavTrap) Energy points before attack: " << this->_energyPoints << std::endl;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
    std::cout << "(ScavTrap) Energy points after attack: " << this->_energyPoints << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}