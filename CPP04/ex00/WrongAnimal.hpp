/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:50:12 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/07 08:04:22 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        //Orthodox Canonical Form
        WrongAnimal();
        WrongAnimal(const WrongAnimal& WrongAnimal);
        WrongAnimal &operator=(const WrongAnimal& WrongAnimal);
        ~WrongAnimal();

        std::string getType() const;
        void makeSound() const;
};
