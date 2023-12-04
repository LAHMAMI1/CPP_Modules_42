/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:30:45 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 10:49:40 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _gradeToSign(150), _gradeToExecute(150)
{
    this->_signed = false;
}

AForm::AForm(const AForm& AForm) : _name(AForm._name), _gradeToSign(AForm._gradeToSign), _gradeToExecute(AForm._gradeToExecute)
{
    this->_signed = AForm._signed;
}

AForm &AForm::operator=(const AForm& AForm)
{
    this->_signed = AForm._signed;
    return (*this);
}

AForm::~AForm() {}

std::string const &AForm::getName() const
{
    return (this->_name);
}

bool const &AForm::getSigned() const
{
    return (this->_signed);
}

int const &AForm::getGradeToSign() const
{
    return (this->_gradeToSign);
}

int const &AForm::getGradeToExecute() const
{
    return (this->_gradeToExecute);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (this->_gradeToSign < bureaucrat.getGrade())
        throw GradeTooLowException();
    this->_signed = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& Aform)
{
    os << "AForm name: " << Aform.getName() << std::endl;
    os << "AForm grade to sign: " << Aform.getGradeToSign() << std::endl;
    os << "AForm grade to execute: " << Aform.getGradeToExecute() << std::endl;
    os << "AForm signed: " << Aform.getSigned() << std::endl;
    return os;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    this->_signed = false;
    if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
        throw GradeTooHighException();
    if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
        throw GradeTooLowException();
}

