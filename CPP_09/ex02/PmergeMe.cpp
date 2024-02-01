/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:38:40 by olahmami          #+#    #+#             */
/*   Updated: 2024/02/01 18:03:59 by olahmami         ###   ########.fr       */
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

// merge sort algorithm
void merge(std::vector<std::pair<int, int> > &pairwise, int left, int right, int mid)
{
    std::vector<std::pair<int, int> > temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right)
    {
        if (pairwise[i].first <= pairwise[j].first)
            temp.push_back(pairwise[i++]);
        else
            temp.push_back(pairwise[j++]);
    }

    while (i <= mid)
        temp.push_back(pairwise[i++]);

    while (j <= right)
        temp.push_back(pairwise[j++]);

    for (int k = left; k <= right; k++)
        pairwise[k] = temp[k - left];
}

void mergeSort(std::vector<std::pair<int, int> > &pairwise, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(pairwise, left, mid);
        mergeSort(pairwise, mid + 1, right);
        merge(pairwise, left, right, mid);
    }
}

// binnary insertion sort algorithm
void binaryInsertionSort(std::vector<std::pair<int, int> > &pairwise, int last, bool check)
{
    std::vector<int> result;
    std::vector<int> unsorted;
    for (std::vector<std::pair<int, int> >::iterator it = pairwise.begin(); it != pairwise.end(); it++)
    {
        result.push_back(it->first);
        unsorted.push_back(it->second);
    }
    if (check)
        unsorted.push_back(last);
    result.insert(result.end(), unsorted.begin(), unsorted.end());
    for (size_t i = 1; i < result.size(); i++)
    {
        int key = result[i];
        int left = 0;
        int right = i;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (key < result[mid])
                right = mid;
            else
                left = mid + 1;
        }
        for (int j = i; j > left; j--)
            result[j] = result[j - 1];
        result[left] = key;
    }
    
    std::cout << "Sorted vector contents: ";
    for (std::vector<int>::const_iterator i = result.begin(); i != result.end(); i++)
    {
        std::cout << *i << ' ';
    }
}

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
    int last = 0;
    bool check = false;
    std::vector<int>::const_iterator next;
    for (std::vector<int>::const_iterator i = _vector.begin(); i != _vector.end(); i+=2)
    { 
        next = i + 1;
        if (next != _vector.end())
        {
            if (*i > *next)
                pairwise.push_back(std::make_pair(*i, *next));
            else
                pairwise.push_back(std::make_pair(*next, *i));
        }
        if (next + 1 == _vector.end() - 1)
        {
            last = _vector.back();
            check = true;
            break;
        }
    }
    std::cout << "Pairwise vector contents: ";
    for (std::vector<std::pair<int, int> >::const_iterator i = pairwise.begin(); i != pairwise.end(); i++)
    {
        std::cout << "(" << i->first << ", " << i->second << ") ";
    }
    std::cout << std::endl;

    // step2: recursion sort (merge sort algorithm)
    mergeSort(pairwise, 0, pairwise.size() - 1);
    std::cout << "Pairwise vector contents after sorting: ";
    for (std::vector<std::pair<int, int> >::const_iterator i = pairwise.begin(); i != pairwise.end(); i++)
    {
        std::cout << "(" << i->first << ", " << i->second << ") ";
    }
    std::cout << std::endl;

    // step3: Insertion (binnary insertion sort algorithm)
    binaryInsertionSort(pairwise, last, check);
}

// checker functions
bool PmergeMe::isNumber(const std::string &arg)
{
    for (size_t i = 0; i < arg.length(); i++)
        if (!isdigit(arg[i]))
            return (false);
    return (true);
}