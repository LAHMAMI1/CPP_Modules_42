/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 04:34:12 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/25 02:06:45 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie* zombie = newZombie("Oussama");
    zombie->announce();
    delete zombie;
    randomChump("Yassir");
    return (0);
}