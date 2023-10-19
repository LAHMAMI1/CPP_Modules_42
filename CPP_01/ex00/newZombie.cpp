/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 04:19:32 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/19 04:27:53 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name( std::string const& name ) { this->name = name; }

Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie();
    zombie->set_name(name);
    return (zombie);
}

