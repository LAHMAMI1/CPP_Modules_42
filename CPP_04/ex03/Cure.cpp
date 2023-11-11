/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:08:56 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/11 03:20:22 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
    this->_type = "cure";
}

Cure::Cure(const Cure& Cure) : AMateria(Cure)
{
    this->_type = Cure._type;
}

Cure &Cure::operator=(const Cure& Cure)
{
    this->_type = Cure._type;
    return (*this);
}

Cure::~Cure() {}

Cure::Cure(std::string const & type)
{
    this->_type = type;
}

std::string const &Cure::getType() const
{
    return (this->_type);
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}