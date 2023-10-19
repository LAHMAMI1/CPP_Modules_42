/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 04:34:12 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/19 04:43:22 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie* zombie = newZombie("Zombie1");
    zombie->announce();
    delete zombie;
    randomChump("Zombie2");
    return (0);
}