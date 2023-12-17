/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:20:23 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/17 15:25:17 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T> void outPut(const T& value) {
    std::cout << value << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    iter(arr, 5, outPut);

    return (0);
}
