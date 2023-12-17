/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:40:25 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/17 15:22:58 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> void iter(T* arr, size_t length, void (*f)(T const &))
{
    for (size_t i = 0; i < length; i++)
        f(arr[i]);
}
