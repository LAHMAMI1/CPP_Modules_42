/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:01:30 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/12 21:37:43 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data;
    data.a = 42;
    data.b = 21;

    uintptr_t raw = Serializer::serialize(&data);
    
    std::cout << "raw = " << raw << std::endl;
    
    Data* ptr = Serializer::deserialize(raw);

    std::cout << "data.a = " << data.a << std::endl;
    std::cout << "data.b = " << data.b << std::endl;
    std::cout << "ptr->a = " << ptr->a << std::endl;
    std::cout << "ptr->b = " << ptr->b << std::endl;
    return (0);
}