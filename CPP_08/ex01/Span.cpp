/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:27:49 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/29 18:40:43 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(const Span &span) : _N(span._N), _sp(span._sp) {}

Span &Span::operator=(const Span &span)
{
    this->_N = span._N;
    this->_sp = span._sp;
    return (*this);
}

Span::~Span() {}

Span::Span(unsigned int N) : _N(N) {}

void Span::addNumber(int num)
{
    if (this->_sp.size() == this->_N)
        throw std::runtime_error("Vector is already filled");
    else
        this->_sp.push_back(num);
}

unsigned int Span::shortestSpan()
{
    if (this->_sp.size() < 2)
        throw std::runtime_error("Not enough elements in the span");

    std::sort(this->_sp.begin(), this->_sp.end());

    unsigned int shortSp = this->_sp[1] - this->_sp[0];
    for (size_t i = 2; i < this->_sp.size(); i++)
    {
        unsigned int difference = this->_sp[i] - this->_sp[i - 1];
        if (difference < shortSp)
            shortSp = difference;
    }

    return shortSp;
}

unsigned int Span::longestSpan()
{
    if (this->_sp.size() < 2)
        throw std::runtime_error("Not enough elements in the span");
    
    unsigned int max = *std::max_element(this->_sp.begin(), this->_sp.end());
    unsigned int min = *std::min_element(this->_sp.begin(), this->_sp.end());

    return max - min;
}