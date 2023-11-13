/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:13:45 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/13 08:15:50 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Default Constructor called (Dog)" << std::endl;
}

Dog::Dog(const Dog& Dog) : Animal(Dog)
{
    std::cout << "Copy Constructor called (Dog)" << std::endl;
}

Dog &Dog::operator=(const Dog& Dog)
{
    if (this != &Dog)
        this->type = Dog.type;
    return (*this);
}

Dog::~Dog() { std::cout << "Destructor called (Dog)" << std::endl; }

void Dog::makeSound() const { std::cout << "WOOF WOOF!" << std::endl; }