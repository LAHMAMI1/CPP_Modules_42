/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:49:04 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 14:39:45 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = "default target";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& RobotomyRequestForm) : AForm(RobotomyRequestForm)
{
    this->_target = RobotomyRequestForm._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& RobotomyRequestForm)
{
    this->_target = RobotomyRequestForm._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string const &RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::NotExecutedException();
    std::cout << "*Clank* *Clank* *Clank*" << std::endl;
    std::time_t  currentTime = std::time(0);
    if (currentTime % 2 == 0)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cerr << this->_target << " has not been robotomized successfully" << std::endl;
}