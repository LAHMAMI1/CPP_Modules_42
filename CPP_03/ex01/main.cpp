/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:47:05 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/05 05:13:28 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavtrap("oussama");
    ScavTrap a2;
    a2 = scavtrap;
    a2.attack("ahmed");
    
    a2.takeDamage(5);
    a2.guardGate();
    
    return (0);
}
