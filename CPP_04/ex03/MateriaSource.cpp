/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 04:34:57 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/11 11:00:35 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& MateriaSource)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
        if (MateriaSource._inventory[i])
            this->_inventory[i] = MateriaSource._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource& MateriaSource)
{
    if (this != &MateriaSource)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            if (MateriaSource._inventory[i])
                this->_inventory[i] = MateriaSource._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

void MateriaSource::learnMateria(AMateria* m)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] && this->_inventory[i]->getType() == type)
            return this->_inventory[i]->clone();
    }
    return 0;
}