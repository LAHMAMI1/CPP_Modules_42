/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:49:34 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 14:29:38 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <ctime>

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        //Orthodox Canonical AForm
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& RobotomyRequestForm);
        RobotomyRequestForm &operator=(const RobotomyRequestForm& RobotomyRequestForm);
        ~RobotomyRequestForm();

        //Getters
        std::string const &getTarget() const;

        //other constructors
        RobotomyRequestForm(std::string target);

        //methods
        void execute(Bureaucrat const & executor) const;
};