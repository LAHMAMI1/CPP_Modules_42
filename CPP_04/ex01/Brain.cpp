/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:39:11 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/13 08:19:07 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { std::cout << "Default Constructor called (Brain)" << std::endl; }

Brain::Brain(const Brain &brain)
{
	for (size_t i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
	std::cout << "Copy Constructor called (Brain)" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
    if (this != &brain)
    {
        for (size_t i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    }
    std::cout << "Assignation operator called (Brain)" << std::endl;
	return (*this);
}

Brain::~Brain() { std::cout << "Destructor called (Brain)" << std::endl; }