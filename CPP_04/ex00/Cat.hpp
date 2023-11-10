/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:11:02 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/07 07:01:37 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        //Orthodox Canonical Form
        Cat();
        Cat(const Cat& Cat);
        Cat &operator=(const Cat& Cat);
        ~Cat();

        void makeSound() const;
};
