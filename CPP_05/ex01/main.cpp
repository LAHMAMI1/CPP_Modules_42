/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:05:47 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/03 17:53:16 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
	{
		Bureaucrat bureaucrat("oussama", 150);
		Form form("wati9a", 150, 150);
		bureaucrat.signForm(form);
		std::cout << form;
		bureaucrat.incrementGrade();
		bureaucrat.signForm(form);
		std::cout << form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}