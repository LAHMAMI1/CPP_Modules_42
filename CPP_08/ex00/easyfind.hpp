/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:41:29 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/26 10:36:03 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

template <typename T> int easyfind(T& container, int occurrence)
{
    typename T::iterator it = std::find(container.begin(), container.end(), occurrence);
    if (container.end() == it)
        throw std::runtime_error("value not found");
    return *it; // Dereference the iterator to get the value it points to
}