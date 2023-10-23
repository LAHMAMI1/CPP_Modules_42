/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 04:00:40 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/22 18:59:17 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void ) { std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::Zombie() {}

void Zombie::setName( std::string const& name ) { this->name = name; }

Zombie::~Zombie( void ) { std::cout << this->name << " is destroyed" << std::endl; }
