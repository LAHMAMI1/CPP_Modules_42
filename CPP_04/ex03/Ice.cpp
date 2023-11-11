/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:17:14 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/11 10:15:17 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
    this->_type = "ice";
}

Ice::Ice(const Ice& Ice) : AMateria(Ice)
{
    this->_type = Ice._type;
}

Ice &Ice::operator=(const Ice& Ice)
{
    this->_type = Ice._type;
    return (*this);
}

Ice::~Ice() {}

Ice::Ice(std::string const & type)
{
    this->_type = type;
}

std::string const &Ice::getType() const
{
    return (this->_type);
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}