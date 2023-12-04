/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:34:03 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 14:35:52 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = "default target";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& PresidentialPardonForm) : AForm(PresidentialPardonForm)
{
    this->_target = PresidentialPardonForm._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& PresidentialPardonForm)
{
    this->_target = PresidentialPardonForm._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string const &PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::NotExecutedException();
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}