/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:38:40 by olahmami          #+#    #+#             */
/*   Updated: 2024/02/02 12:36:39 by olahmami         ###   ########.fr       */
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

// checker functions
bool PmergeMe::isNumber(const std::string &arg)
{
    for (size_t i = 0; i < arg.length(); i++)
        if (!isdigit(arg[i]))
            return (false);
    return (true);
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
    
    std::cout << "Before: ";
    for (std::vector<int>::const_iterator i = _vector.begin(); i != _vector.end(); i++)
        std::cout << *i << ' ';
    std::cout << std::endl;

    std::clock_t startVec = std::clock();
    sortVector();
    std::clock_t endVec = std::clock();
    double durationVec = (endVec - startVec) * 1000.0 / CLOCKS_PER_SEC;

    std::clock_t startDeq = std::clock();
    sortDeque();
    std::clock_t endDeq = std::clock();
    double durationDeq = (endDeq - startDeq) * 1000.0 / CLOCKS_PER_SEC;

    std::cout << "After: ";
    for (std::vector<int>::const_iterator i = _vector.begin(); i != _vector.end(); i++)
        std::cout << *i << ' ';
    std::cout << std::endl;

    std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << durationVec << " us" << std::endl;
    std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : " << durationDeq << " us" << std::endl;
}

// sorting vector
void PmergeMe::sortVector()
{
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

    // step2: recursion sort (merge sort algorithm)
    mergeSortVec(pairwise, 0, pairwise.size() - 1);

    // step3: Insertion (binnary insertion sort algorithm)
    binaryInsertionSortVec(pairwise, last, check);
}

// merge sort algorithm vector
void PmergeMe::mergeVec(std::vector<std::pair<int, int> > &pairwise, int left, int right, int mid)
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

void PmergeMe::mergeSortVec(std::vector<std::pair<int, int> > &pairwise, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSortVec(pairwise, left, mid);
        mergeSortVec(pairwise, mid + 1, right);
        mergeVec(pairwise, left, right, mid);
    }
}

// binnary insertion sort algorithm vector
void PmergeMe::binaryInsertionSortVec(std::vector<std::pair<int, int> > &pairwise, int last, bool check)
{
    std::vector<int> unsorted;
    _vector.clear();

    for (std::vector<std::pair<int, int> >::iterator it = pairwise.begin(); it != pairwise.end(); it++)
    {
        _vector.push_back(it->first);
        unsorted.push_back(it->second);
    }

    if (check)
        unsorted.push_back(last);

    _vector.insert(_vector.end(), unsorted.begin(), unsorted.end());

    for (size_t i = 1; i < _vector.size(); i++)
    {
        int key = _vector[i];
        int left = 0;
        int right = i;

        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (key < _vector[mid])
                right = mid;
            else
                left = mid + 1;
        }

        for (int j = i; j > left; j--)
            _vector[j] = _vector[j - 1];

        _vector[left] = key;
    }
}

// sorting deque
void PmergeMe::sortDeque()
{
    // ford johnson algorithm
    // step1: Pairwise comparison
    std::deque<std::pair<int, int> > pairwise;
    int last = 0;
    bool check = false;
    std::deque<int>::const_iterator next;
    for (std::deque<int>::const_iterator i = _deque.begin(); i != _deque.end(); i+=2)
    { 
        next = i + 1;
        if (next != _deque.end())
        {
            if (*i > *next)
                pairwise.push_back(std::make_pair(*i, *next));
            else
                pairwise.push_back(std::make_pair(*next, *i));
        }
        if (next + 1 == _deque.end() - 1)
        {
            last = _deque.back();
            check = true;
            break;
        }
    }

    // step2: recursion sort (merge sort algorithm)
    mergeSortDeq(pairwise, 0, pairwise.size() - 1);

    // step3: Insertion (binnary insertion sort algorithm)
    binaryInsertionSortDeq(pairwise, last, check);
}

// merge sort algorithm deque
void PmergeMe::mergeDeq(std::deque<std::pair<int, int> > &pairwise, int left, int right, int mid)
{
    std::deque<std::pair<int, int> > temp;
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

void PmergeMe::mergeSortDeq(std::deque<std::pair<int, int> > &pairwise, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSortDeq(pairwise, left, mid);
        mergeSortDeq(pairwise, mid + 1, right);
        mergeDeq(pairwise, left, right, mid);
    }
}

// binnary insertion sort algorithm deque
void PmergeMe::binaryInsertionSortDeq(std::deque<std::pair<int, int> > &pairwise, int last, bool check)
{
    std::deque<int> unsorted;
    _deque.clear();

    for (std::deque<std::pair<int, int> >::iterator it = pairwise.begin(); it != pairwise.end(); it++)
    {
        _deque.push_back(it->first);
        unsorted.push_back(it->second);
    }

    if (check)
        unsorted.push_back(last);

    _deque.insert(_deque.end(), unsorted.begin(), unsorted.end());

    for (size_t i = 1; i < _deque.size(); i++)
    {
        int key = _deque[i];
        int left = 0;
        int right = i;

        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (key < _deque[mid])
                right = mid;
            else
                left = mid + 1;
        }

        for (int j = i; j > left; j--)
            _deque[j] = _deque[j - 1];

        _deque[left] = key;
    }
}
