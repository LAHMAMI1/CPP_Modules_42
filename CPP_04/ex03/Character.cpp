/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:30:04 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/11 10:39:10 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    this->_name = "default";
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(const Character& Character)
{
    this->_name = Character._name;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
        if (Character._inventory[i])
            this->_inventory[i] = Character._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
}

Character &Character::operator=(const Character& Character)
{
    if (this != &Character)
    {
        this->_name = Character._name;
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            if (Character._inventory[i])
                this->_inventory[i] = Character._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

Character::Character(std::string const & name)
{
    this->_name = name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    for (int i = 0; i < 4; i++)
    {
        if (i == idx)
        {
            this->_inventory[i] = NULL;
            return ;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    for (int i = 0; i < 4; i++)
    {
        if (i == idx)
        {
            this->_inventory[i]->use(target);
            return ;
        }
    }
}