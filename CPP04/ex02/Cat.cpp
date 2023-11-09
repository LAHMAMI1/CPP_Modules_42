/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:13:25 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/09 10:20:17 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Default Constructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat& Cat) : Animal(Cat)
{
    this->type = Cat.type;
    this->brain = new Brain(*Cat.brain);
    std::cout << "Copy Constructor called (Cat)" << std::endl;
}

Cat &Cat::operator=(const Cat& Cat)
{
    if (this != &Cat)
    {
        this->type = Cat.type;
        *this->brain = *Cat.brain;
    }
    return (*this);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Destructor called (Cat)" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MEOW MEOW!" << std::endl;
}
