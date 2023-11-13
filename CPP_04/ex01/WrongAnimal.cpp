/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:50:09 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/13 08:22:51 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "Default Constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal)
{
    this->type = WrongAnimal.type;
    std::cout << "Copy Constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& WrongAnimal)
{
    if (this != &WrongAnimal)
        this->type = WrongAnimal.type;
    return (*this);
}

WrongAnimal::~WrongAnimal() { std::cout << "Destructor called (WrongAnimal)" << std::endl; }

std::string WrongAnimal::getType() const { return (this->type); }

void WrongAnimal::makeSound() const { std::cout << "There is no sound! (WrongAnimal)" << std::endl; }
