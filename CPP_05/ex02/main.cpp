/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:05:47 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/04 15:32:05 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    {
		std::cout << "\nTEST 1 ShrubberyCreationForm\n" << std::endl;
		try
		{
			Bureaucrat oussama("oussama", 137);
			ShrubberyCreationForm shrubbery("form1");
			oussama.signForm(shrubbery);
			oussama.executeForm(shrubbery);
		}
		catch (std::exception& e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTEST 2 RobotomyRequestForm\n" << std::endl;
		try
		{
			Bureaucrat oussama("oussama", 45);
			RobotomyRequestForm robot("form2");
			oussama.signForm(robot);
			oussama.executeForm(robot);
		}
		catch (std::exception& e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTEST 3 PresidentialPardonForm\n" << std::endl;
		try
		{
			Bureaucrat oussama("oussama", 5);
			PresidentialPardonForm president("form3");
			oussama.signForm(president);
			oussama.executeForm(president);
		}
		catch (std::exception& e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}
    return (0);
}