/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:02:24 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/31 18:28:51 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T> class MutantStack : public std::stack<T>
{
    public:
        // Orthodox Canonical Form
        MutantStack() {};
        MutantStack(const MutantStack &mutantStack) : std::stack<T>(mutantStack) {};
        MutantStack &operator=(const MutantStack &mutantStack)
        {
            std::stack<T>::operator=(mutantStack);
            return (*this);
        };
        ~MutantStack() {};

        // Iterators
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return std::stack<T>::c.begin();
        }
        iterator end()
        {
            return std::stack<T>::c.end();
        }
};
