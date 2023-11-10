/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 07:29:15 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/10 10:16:58 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        //Orthodox Canonical Form
        Ice();
        Ice(const Ice& Ice);
        Ice &operator=(const Ice& Ice);
        ~Ice();

        Ice(std::string const & type);
        std::string const & getType() const;
        AMateria* clone() const;
        void use(ICharacter& target);
};