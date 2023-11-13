/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:50:15 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/07 07:56:28 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "Cat";
    std::cout << "Default Constructor called (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const WrongCat& WrongCat) : WrongAnimal(WrongCat)
{
    std::cout << "Copy Constructor called (WrongCat)" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& WrongCat)
{
    if (this != &WrongCat)
        this->type = WrongCat.type;
    return (*this);
}

WrongCat::~WrongCat() { std::cout << "Destructor called (WrongCat)" << std::endl; }

void WrongCat::makeSound() const { std::cout << "MEOW MEOW!" << std::endl; }