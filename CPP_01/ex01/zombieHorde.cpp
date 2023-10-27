/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:59:03 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/25 01:45:54 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cout << "Invalid number of zombies" << std::endl;
        return (NULL);
    }
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return (zombies);
}