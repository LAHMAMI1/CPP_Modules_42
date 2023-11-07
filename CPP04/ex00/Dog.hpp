/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:12:18 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/07 07:51:15 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        //Orthodox Canonical Form
        Dog();
        Dog(const Dog& Dog);
        Dog &operator=(const Dog& Dog);
        ~Dog();

        void makeSound() const;
};
