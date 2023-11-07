/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:13:07 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/07 07:55:07 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Default Constructor called (Animal)" << std::endl;
}

Animal::Animal(const Animal& Animal)
{
    this->type = Animal.type;
    std::cout << "Copy Constructor called (Animal)" << std::endl;
}

Animal &Animal::operator=(const Animal& Animal)
{
    if (this != &Animal)
        this->type = Animal.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor called (Animal)" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "There is no sound! (Animal)" << std::endl;
}
