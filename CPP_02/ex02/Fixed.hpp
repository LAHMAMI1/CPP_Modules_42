/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:21:23 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/01 04:24:24 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _fixedPoint;
        const static int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int integer);
        Fixed(const float floating);
        Fixed(const Fixed &fixed);
        ~Fixed();

        Fixed& operator=(const Fixed &fixed);

        float toFloat( void ) const;
        int toInt( void ) const;

        bool Fixed::operator==(const Fixed &b) const;
        bool Fixed::operator!=(const Fixed &b) const;
        bool Fixed::operator>=(const Fixed &b) const;
        bool Fixed::operator<=(const Fixed &b) const;
        bool Fixed::operator>(const Fixed &b) const;
        bool Fixed::operator<(const Fixed &b) const;
        
        Fixed Fixed::operator+(const Fixed &b) const;
        Fixed Fixed::operator-(const Fixed &b) const;
        Fixed Fixed::operator*(const Fixed &b) const;
        Fixed Fixed::operator/(const Fixed &b) const;

        Fixed& Fixed::operator++();
        Fixed& Fixed::operator--();
        Fixed Fixed::operator++(int);
        Fixed Fixed::operator--(int);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif