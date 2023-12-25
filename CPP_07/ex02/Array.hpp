/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:15:28 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/25 11:05:57 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> class Array
{
    private:
        unsigned int _n;
        T *_arr;

    public:
        //Orthodox Canonical Form
        Array() : _n(0), _arr(NULL) {};
        Array(const Array &array) : _n(array._n), _arr(new T[array._n])
        {
            for (unsigned int i = 0; i < this->_n; i++)
                this->_arr[i] = array._arr[i];
        }
        Array &operator=(const Array &array)
        {
            this->_n = array->_n;
            this->_arr = new T[array._n];
            for (unsigned int i = 0; i < this->_n; i++)
                this->_arr[i] = array._arr[i];
            return (*this);
        }
        ~Array()
        {
            delete[] this->_arr;
        }

        Array(unsigned int n) : _n(n), _arr(new T[n]) {};
        T &operator[](unsigned int index)
        {
            if (index >= this->_n)
                throw std::out_of_range("index is out of bounds");
            return (this->_arr[index]);
        }
        unsigned int size()
        {
            return (this->_n);
        }
};
