/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:13:57 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/03 17:56:42 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const _name;
        bool _signed;
        int const _gradeToSign;
        int const _gradeToExecute;
    public:
        //Orthodox Canonical Form
        Form();
        Form(const Form& Form);
        Form &operator=(const Form& Form);
        ~Form();

        //Getters
        std::string const &getName() const;
        bool const &getSigned() const;
        int const &getGradeToSign() const;
        int const &getGradeToExecute() const;

        //Exception
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Grade too high");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Grade too low");
                }
        };

        void beSigned(Bureaucrat &bureaucrat);
        Form(std::string name, int gradeToSign, int gradeToExecute);
};

std::ostream& operator<<(std::ostream& os, const Form& form);