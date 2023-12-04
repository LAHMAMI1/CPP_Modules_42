/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:19:01 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 13:37:37 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const _name;
        bool _signed;
        int const _gradeToSign;
        int const _gradeToExecute;
    public:
        //Orthodox Canonical AForm
        AForm();
        AForm(const AForm& AForm);
        AForm &operator=(const AForm& AForm);
        virtual ~AForm();

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
        class NotSignedException : public std::exception
        {
             public:
                virtual const char* what() const throw()
                {
                    return ("Form not signed");
                }
        };
        class NotExecutedException : public std::exception
        {
             public:
                virtual const char* what() const throw()
                {
                    return ("Grade too low to execute form");
                }
        };

        void beSigned(Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
        AForm(std::string name, int gradeToSign, int gradeToExecute);
};

std::ostream& operator<<(std::ostream& os, const AForm& Aform);