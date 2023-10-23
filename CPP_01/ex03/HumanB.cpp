/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 02:50:37 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/23 04:33:48 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB(std::string name) : name(name) {}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}