/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:08:56 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/13 08:37:47 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() { this->_type = "cure"; }

Cure::Cure(const Cure& Cure) : AMateria(Cure) {}

Cure &Cure::operator=(const Cure& Cure)
{
    this->_type = Cure._type;
    return (*this);
}

Cure::~Cure() {}

Cure::Cure(std::string const & type) : AMateria(type) {}

AMateria* Cure::clone() const { return (new Cure()); }

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}