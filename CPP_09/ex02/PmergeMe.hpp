/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:38:44 by olahmami          #+#    #+#             */
/*   Updated: 2024/02/02 11:58:30 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <ctime>

class PmergeMe
{
    private:
        std::vector<int> _vector;
        std::deque<int> _deque;

    public:
        // Orthodox Canonical Form
        PmergeMe();
        PmergeMe(const PmergeMe &pm);
        PmergeMe &operator=(const PmergeMe &pm);
        ~PmergeMe();

        // Member functions
        void execution(int ac, char **av);
        bool isNumber(const std::string &s);

        // sorting vector
        void sortVector();
        // ford johnson algorithm
        // step1: Pairwise comparison (in sortVector())
        // step2: recursion sort (merge sort algorithm)
        void mergeVec(std::vector<std::pair<int, int> > &pairwise, int left, int right, int mid);
        void mergeSortVec(std::vector<std::pair<int, int> > &pairwise, int left, int right);
        // step3: Insertion (binnary insertion sort algorithm)
        void binaryInsertionSortVec(std::vector<std::pair<int, int> > &pairwise, int last, bool check);

        // sorting deque
        void sortDeque();
        // ford johnson algorithm
        // step1: Pairwise comparison (in sortDeque())
        // step2: recursion sort (merge sort algorithm)
        void mergeDeq(std::deque<std::pair<int, int> > &pairwise, int left, int right, int mid);
        void mergeSortDeq(std::deque<std::pair<int, int> > &pairwise, int left, int right);
        // step3: Insertion (binnary insertion sort algorithm)
        void binaryInsertionSortDeq(std::deque<std::pair<int, int> > &pairwise, int last, bool check);
};
