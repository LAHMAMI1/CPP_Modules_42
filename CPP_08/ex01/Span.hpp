/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:28:18 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/28 20:11:36 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _sp;

    public:
        //Orthodox Canonical Form
        Span();
        Span(const Span &span);
        Span &operator=(const Span &span);
        ~Span();

        Span(unsigned int N);
        void addNumber(int num);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};