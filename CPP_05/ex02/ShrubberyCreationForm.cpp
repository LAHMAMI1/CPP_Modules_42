/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:13:47 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 14:54:44 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = "default target";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ShrubberyCreationForm) : AForm(ShrubberyCreationForm)
{
    this->_target = ShrubberyCreationForm._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ShrubberyCreationForm)
{
    this->_target = ShrubberyCreationForm._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string const &ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::NotExecutedException();
    std::ofstream newFile((this->_target + "_shrubbery").c_str());
    if (newFile.is_open())
    {
        newFile << "          &&& &&  & &&" << std::endl;
        newFile << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
        newFile << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
        newFile << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
        newFile << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
        newFile << "&&   && & &| &| /& & % ()& /&&" << std::endl;
        newFile << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
        newFile << "     &&     \\|||" << std::endl;
        newFile << "             |||" << std::endl;
        newFile << "             |||" << std::endl;
        newFile << "             |||" << std::endl;
        newFile << "       , -=-~  .-^- _" << std::endl;
        newFile.close();
    }
    else
        std::cout << "Error: can't open file" << std::endl;
}