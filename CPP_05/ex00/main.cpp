/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:05:47 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/02 15:48:43 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
   try
	{
		Bureaucrat bob("Bob1", 1);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << "after \"incrementGrade\": " << bob << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bob("Bob2", 149);
		std::cout << bob << std::endl;
		bob.decrementGrade();
		std::cout << "after \"decrementGrade\": " << bob << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

    return (0);
}