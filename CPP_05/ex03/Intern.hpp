/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:21:21 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 16:27:04 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Intern
{
    public:
        //Orthodox Canonical Form
        Intern();
        Intern(const Intern& Intern);
        Intern &operator=(const Intern& Intern);
        ~Intern();

        //methods
        AForm *makeForm(std::string formName, std::string target);
};
