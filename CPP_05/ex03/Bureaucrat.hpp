/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:09:14 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 14:50:14 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
    public:
        //Orthodox Canonical Form
        Bureaucrat();
        Bureaucrat(const Bureaucrat& Bureaucrat);
        Bureaucrat &operator=(const Bureaucrat& Bureaucrat);
        ~Bureaucrat();

        //Getters
        std::string const &getName() const;
        int const &getGrade() const;

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

        void incrementGrade();
        void decrementGrade();
        void signForm(AForm &Aform);
        void executeForm(AForm const & Aform);

        Bureaucrat(std::string const &name, int grade);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);