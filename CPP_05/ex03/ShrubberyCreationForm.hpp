/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:52:27 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 13:31:01 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    public:
        //Orthodox Canonical AForm
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& ShrubberyCreationForm);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& ShrubberyCreationForm);
        ~ShrubberyCreationForm();

        //Getters
        std::string const &getTarget() const;

        //other constructors
        ShrubberyCreationForm(std::string target);

        //methods
        void execute(Bureaucrat const & executor) const;
};