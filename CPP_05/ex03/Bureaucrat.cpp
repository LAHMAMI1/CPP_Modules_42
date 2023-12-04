/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:09:17 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 15:17:56 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default")
{
    this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat& Bureaucrat) : _name(Bureaucrat._name)
{
    this->_grade = Bureaucrat._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& Bureaucrat)
{
    this->_grade = Bureaucrat._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string const &Bureaucrat::getName() const
{
    return (this->_name);
}

int const &Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
    this->_grade--;
    if (this->_grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    this->_grade++;
    if (this->_grade > 150)
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (os);
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
    this->_grade = grade;
    if (this->_grade < 1)
        throw GradeTooHighException();
    if (this->_grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::signForm(AForm &Aform)
{
    try
    {
        Aform.beSigned(*this);
        std::cout << this->_name << " signed " << Aform.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->_name << " couldn't sign " << Aform.getName() << " because " << e.what() << std::endl;
    }   
}

void Bureaucrat::executeForm(AForm const & Aform)
{
    try
    {
        Aform.execute(*this);
        std::cout << this->_name << " executed " << Aform.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->_name << " couldn't execute " << Aform.getName() << " because " << e.what() << std::endl;
    }
}