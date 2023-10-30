/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:21:23 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/30 04:41:40 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _fixedPoint;
        const static int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int integer);
        // Fixed(const float floating);
        Fixed(const Fixed &fixed);
        Fixed& operator=(const Fixed &fixed);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        // float toFloat( void ) const;
        int toInt( void ) const;
        ~Fixed();
};

#endif