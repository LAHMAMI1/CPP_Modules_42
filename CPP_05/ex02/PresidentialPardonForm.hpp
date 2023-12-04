/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:33:29 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 14:33:51 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
    public:
        //Orthodox Canonical AForm
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& PresidentialPardonForm);
        PresidentialPardonForm &operator=(const PresidentialPardonForm& PresidentialPardonForm);
        ~PresidentialPardonForm();

        //Getters
        std::string const &getTarget() const;

        //other constructors
        PresidentialPardonForm(std::string target);

        //methods
        void execute(Bureaucrat const & executor) const;
};