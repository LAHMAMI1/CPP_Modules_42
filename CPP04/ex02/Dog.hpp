/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:12:18 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/09 03:29:32 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        //Orthodox Canonical Form
        Dog();
        Dog(const Dog& Dog);
        Dog &operator=(const Dog& Dog);
        ~Dog();

        void makeSound() const;
};
