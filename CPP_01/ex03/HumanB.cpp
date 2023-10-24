/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 02:50:37 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/23 21:02:37 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

void HumanB::setWeapon(Weapon& weapon) { this->weapon = &weapon; }

void HumanB::attack()
{
    if (this->weapon == NULL)
    {
        std::cout << this->name << " has no weapon" << std::endl;
        return ;
    }
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}