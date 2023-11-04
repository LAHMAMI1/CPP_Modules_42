/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:47:10 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/04 04:18:59 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

    public:
        //Orthodox Canonical Form
        ClapTrap();
        ClapTrap(const ClapTrap& claptrap);
        ClapTrap &operator=(const ClapTrap& claptrap);
        ~ClapTrap();

        ClapTrap(std::string name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount); 
};

#endif
