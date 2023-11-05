/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:55:40 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/05 05:22:23 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        
    public:
        //Orthodox Canonical Form
        ScavTrap();
        ScavTrap(const ScavTrap& claptrap);
        ScavTrap &operator=(const ScavTrap& claptrap);
        ~ScavTrap();

        ScavTrap(std::string name);
        void attack(const std::string& target);
        void guardGate();
};

#endif
