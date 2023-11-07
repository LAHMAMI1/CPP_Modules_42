/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:27:11 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/07 07:50:40 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        //Orthodox Canonical Form
        Animal();
        Animal(const Animal& Animal);
        Animal &operator=(const Animal& Animal);
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const;
};
