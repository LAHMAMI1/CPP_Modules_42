/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:47:05 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/04 04:21:49 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("OUSSAMA");
    ClapTrap claptrap2(claptrap);
    ClapTrap claptrap3;
    claptrap3 = claptrap2;
    claptrap.attack("ENEMY");
    claptrap.takeDamage(50);
    claptrap.beRepaired(7);
    return (0);
}
