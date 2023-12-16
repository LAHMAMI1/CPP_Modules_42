/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 21:07:55 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/16 17:07:29 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

Base * generate(void)
{
    srand(time(0));
    int random = rand() % 3;
    
    switch (random)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            break;
    }
    return (0);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "NULL" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return ;
    }
    catch(const std::exception& e) {}
    
    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return ;
    }
    catch(const std::exception& e) {}

    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return ;
    }
    catch(const std::exception& e) {}
}