/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:50:17 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/07 07:52:46 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        //Orthodox Canonical Form
        WrongCat();
        WrongCat(const WrongCat& WrongCat);
        WrongCat &operator=(const WrongCat& WrongCat);
        ~WrongCat();

        void makeSound() const;
};