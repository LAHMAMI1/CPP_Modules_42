/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:41:05 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/11 10:14:09 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria& AMateria)
{
    this->_type = AMateria._type;
}

AMateria &AMateria::operator=(const AMateria& AMateria)
{
    this->_type = AMateria._type;
    return (*this);
}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* AMateria " << target.getName() << "’s default *" << std::endl;
}