/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:38:44 by olahmami          #+#    #+#             */
/*   Updated: 2024/01/29 17:05:42 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <cctype>
#include <cstdlib>

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
        bool is_number(const std::string &s);
};
