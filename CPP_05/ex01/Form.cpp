/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:14:00 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/03 17:56:28 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _gradeToSign(150), _gradeToExecute(150)
{
    this->_signed = false;
}

Form::Form(const Form& Form) : _name(Form._name), _gradeToSign(Form._gradeToSign), _gradeToExecute(Form._gradeToExecute)
{
    this->_signed = Form._signed;
}

Form &Form::operator=(const Form& Form)
{
    this->_signed = Form._signed;
    return (*this);
}

Form::~Form() {}

std::string const &Form::getName() const
{
    return (this->_name);
}

bool const &Form::getSigned() const
{
    return (this->_signed);
}

int const &Form::getGradeToSign() const
{
    return (this->_gradeToSign);
}

int const &Form::getGradeToExecute() const
{
    return (this->_gradeToExecute);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (this->_gradeToSign < bureaucrat.getGrade())
        throw GradeTooLowException();
    this->_signed = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form name: " << form.getName() << std::endl;
    os << "Form grade to sign: " << form.getGradeToSign() << std::endl;
    os << "Form grade to execute: " << form.getGradeToExecute() << std::endl;
    os << "Form signed: " << form.getSigned() << std::endl;
    return os;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    this->_signed = false;
    if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
        throw GradeTooHighException();
    if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
        throw GradeTooLowException();
}