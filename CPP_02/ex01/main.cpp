/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:20:48 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/30 04:47:39 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

int main() {
    int integer_value = 16; // The integer value you want to convert
    int fractional_bits = 8; // Number of fractional bits

    // Convert the integer to fixed-point by scaling
    int fixed_point_value = integer_value << fractional_bits;

    // Optionally, round the fixed-point value
    // fixed_point_value = fixed_point_value  >> fractional_bits;

    std::cout << "Integer Value: " << integer_value << std::endl;
    std::cout << "Fixed-Point Value with " << fractional_bits << " fractional bits: " << fixed_point_value << std::endl;

    return 0;
}
