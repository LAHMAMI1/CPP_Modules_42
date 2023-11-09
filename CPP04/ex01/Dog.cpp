/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:13:45 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/09 10:08:35 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Default Constructor called (Dog)" << std::endl;
}

Dog::Dog(const Dog& Dog) : Animal(Dog)
{
    this->type = Dog.type;
    this->brain = new Brain(*Dog.brain);
    std::cout << "Copy Constructor called (Dog)" << std::endl;
}

Dog &Dog::operator=(const Dog& Dog)
{
    if (this != &Dog)
    {
        this->type = Dog.type;
        *this->brain = *Dog.brain;
    }
    return (*this);
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Destructor called (Dog)" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "WOOF WOOF!" << std::endl;
}