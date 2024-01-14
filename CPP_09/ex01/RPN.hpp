/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:30:33 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/14 11:59:01 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<int> _stack;

    public:
        // Orthodox Canonical Form
        RPN();
        RPN(const RPN &rpn);
        RPN &operator=(const RPN &rpn);
        ~RPN();

        // Member functions
        void result(char *av);
};
