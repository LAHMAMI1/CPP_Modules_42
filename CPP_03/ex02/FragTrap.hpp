/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 05:19:49 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/05 05:25:34 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        //Orthodox Canonical Form
        FragTrap();
        FragTrap(const FragTrap& fragtrap);
        FragTrap &operator=(const FragTrap& fragtrap);
        ~FragTrap();

        FragTrap(std::string name);
        void highFivesGuys(void);
};

#endif