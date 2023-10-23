/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 03:57:56 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/23 01:01:43 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie* zombie = zombieHorde(3, "Oussama");
    for (int i = 0; i < 3; i++)
        zombie[i].announce();
    delete[] zombie;
    return (0);
}