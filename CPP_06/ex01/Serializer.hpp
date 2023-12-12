/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:01:52 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/12 21:29:33 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

struct Data
{
    int a;
    int b;
};

class Serializer
{
    private:
        Serializer();

    public:
        //Orthodox Canonical Form
        Serializer(const Serializer &sc);
        Serializer &operator=(const Serializer &sc);
        ~Serializer();
        
        //Methods
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
