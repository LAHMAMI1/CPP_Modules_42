/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 03:52:43 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/19 04:41:35 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void )
{
    std::cout << this->name << " is dead" << std::endl;
}