/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:38:40 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/29 18:05:41 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Orthodox Canonical Form
PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &pm)
{
    this->_vector = pm._vector;
    this->_deque = pm._deque;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &pm)
{
    if (this != &pm)
    {
        this->_vector = pm._vector;
        this->_deque = pm._deque;
    }
    return (*this);
}

PmergeMe::~PmergeMe() {}

// Member functions
void PmergeMe::execution(int ac, char **av)
{
    std::string arg;
    
    for (int i = 1; i < ac; i++)
    {
        arg = av[i];
        std::cout << arg << std::endl;
        if (arg.empty())
            throw std::invalid_argument("Error: Empty argument");
        else if (!is_number(arg))
            throw std::invalid_argument("Error: Invalid number");
    }
    
    for (int i = 1; i < ac; i++)
    {
        _vector.push_back(std::atoi(av[i]));
        _deque.push_back(std::atoi(av[i]));
    }
    
    // std::cout << "Vector contents: ";
    // for (std::vector<int>::const_iterator i = _vector.begin(); i != _vector.end(); ++i)
    // {
    //     std::cout << *i << ' ';
    // }
    // std::cout << std::endl;

    // std::cout << "deque contents: ";
    // for (std::deque<int>::const_iterator i = _deque.begin(); i != _deque.end(); ++i)
    // {
    //     std::cout << *i << ' ';
    // }
    // std::cout << std::endl;
}

// checker functions
bool PmergeMe::is_number(const std::string &arg)
{
    for (size_t i = 0; i < arg.length(); i++)
        if (!isdigit(arg[i]))
            return (false);
    return (true);
}