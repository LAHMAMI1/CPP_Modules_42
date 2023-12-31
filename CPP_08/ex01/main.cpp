/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:27:23 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/31 18:43:45 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    {    
        try
        {
            Span sp1 = Span(-5);

            sp1.addNumber(6);

            // coment this section for testing not enough element
            sp1.addNumber(3);
            sp1.addNumber(17);
            sp1.addNumber(9);
            sp1.addNumber(11);

            // sp1.addNumber(11); //test for error if the span has already filled

            std::cout << sp1.shortestSpan() << std::endl;
            std::cout << sp1.longestSpan() << std::endl;
        }
        catch(const std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    
    // test for addRange
    {
        try
        {
            Span sp2(10);
    
            sp2.addRange(0, 100);

            std::cout << sp2.shortestSpan() << std::endl;
            std::cout << sp2.longestSpan() << std::endl;
        }
        catch(const std::runtime_error& e)
        {
            std::cerr << e.what() << std::endl;
        }
        
    }

    return 0;
}