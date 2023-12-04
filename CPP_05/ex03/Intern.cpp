/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:21:25 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 17:04:16 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& Intern)
{
    (void)Intern;
}

Intern &Intern::operator=(const Intern& Intern)
{
    (void)Intern;
    return (*this);
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    std::string formN[3] = {"shrubbery creation","robotomy request", "presidential pardon"};
    for (size_t i = 0; i < 3; i++)
    {
        if (formN[i] == formName)
        {
            std::cout << "Intern creates " << formName << std::endl;
            switch (i)
            {
                case 0:
                    return (new ShrubberyCreationForm(target));
                case 1:
                    return (new RobotomyRequestForm(target));
                case 2:
                    return (new PresidentialPardonForm(target));
            }
        }
    }
    std::cerr << "No such name" << formName << std::endl;
    return (NULL);
}