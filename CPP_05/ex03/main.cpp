/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:05:47 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 17:16:39 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern	stajaire;
	AForm*	rrf;
	rrf = stajaire.makeForm("robotomy request", "Bender");
	try
	{
		Bureaucrat test1("test1", 1);
		test1.signForm(*rrf);
		test1.executeForm(*rrf);
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	delete rrf;

    return (0);
}