/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 07:29:04 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/10 07:59:22 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        //Orthodox Canonical Form
        Cure();
        Cure(const Cure& Cure);
        Cure &operator=(const Cure& Cure);
        ~Cure();

        Cure(std::string const & type);
        std::string const & getType() const;
        AMateria* clone() const;
        void use(ICharacter& target);
};