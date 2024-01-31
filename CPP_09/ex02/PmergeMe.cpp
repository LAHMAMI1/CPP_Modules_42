/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:38:40 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/31 18:30:42 by olahmami         ###   ########.fr       */
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
        if (arg.empty())
            throw std::invalid_argument("Error: Empty argument");
        else if (!isNumber(arg))
            throw std::invalid_argument("Error: Invalid number");
    }
    
    for (int i = 1; i < ac; i++)
    {
        _vector.push_back(std::atoi(av[i]));
        _deque.push_back(std::atoi(av[i]));
    }
    
    std::cout << "Vector contents before: ";
    for (std::vector<int>::const_iterator i = _vector.begin(); i != _vector.end(); i++)
    {
        std::cout << *i << ' ';
    }
    std::cout << std::endl;

    // ford johnson algorithm
    // step1: Pairwise comparison
    std::vector<std::pair<int, int> > pairwise;
    std::vector<int>::const_iterator next;
    for (std::vector<int>::const_iterator i = _vector.begin(); i != _vector.end() - 1; i+=2)
    {
        
        next = i + 1;
        if (next != _vector.end())
        {
            if (*i > *next)
                pairwise.push_back(std::make_pair(*i, *next));
            else
                pairwise.push_back(std::make_pair(*next, *i));
        }
        
        
    }
    std::cout << "Pairwise vector contents: ";
    for (std::vector<std::pair<int, int> >::const_iterator i = pairwise.begin(); i != pairwise.end(); i++)
    {
        std::cout << "(" << i->first << ", " << i->second << ") ";
    }
    std::cout << std::endl;
}

// checker functions
bool PmergeMe::isNumber(const std::string &arg)
{
    for (size_t i = 0; i < arg.length(); i++)
        if (!isdigit(arg[i]))
            return (false);
    return (true);
}