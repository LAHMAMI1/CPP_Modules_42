/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:30:29 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/14 12:44:40 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Orthodox Canonical Form
RPN::RPN() {}

RPN::RPN(const RPN &rpn) { this->_stack = rpn._stack; }

RPN &RPN::operator=(const RPN &rpn)
{
    if (this != &rpn)
        this->_stack = rpn._stack;
    return (*this);
}

RPN::~RPN() {}

// Member functions
void RPN::result(char *av)
{
    std::string str(av);
    if (str.empty())
        throw std::runtime_error("Error: is empty");
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
            continue;
        if (str[i] >= '0' && str[i] <= '9')
            this->_stack.push(str[i] - '0');
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            if (this->_stack.size() < 2)
                throw std::runtime_error("Error: Invalid arguments");
            int a = this->_stack.top();
            this->_stack.pop();
            int b = this->_stack.top();
            this->_stack.pop();
            if (str[i] == '+')
                this->_stack.push(b + a);
            else if (str[i] == '-')
                this->_stack.push(b - a);
            else if (str[i] == '*')
                this->_stack.push(b * a);
            else if (str[i] == '/')
                this->_stack.push(b / a);
        }
        else
            throw std::runtime_error("Error: Invalid arguments");
    }
    if (this->_stack.size() != 1)
        throw std::runtime_error("Error: Invalid arguments");
    std::cout << this->_stack.top() << std::endl;
}