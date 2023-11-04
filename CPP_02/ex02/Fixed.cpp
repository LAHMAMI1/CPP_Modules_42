/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:21:21 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/04 01:38:48 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() { this->_fixedPoint = 0; }

Fixed::Fixed(const Fixed &fixed) { *this = fixed; }

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if (this != &fixed)
		this->_fixedPoint = fixed._fixedPoint;
	return (*this);
}

Fixed::~Fixed() {}

Fixed::Fixed(const int integer) { _fixedPoint = integer << _fractionalBits; }

int Fixed::toInt(void) const { return (_fixedPoint >> _fractionalBits); }

Fixed::Fixed(const float floating) { _fixedPoint = (int)(roundf(floating * (1 << _fractionalBits))); }

float Fixed::toFloat(void) const { return ((float)_fixedPoint / (float)(1 << _fractionalBits)); }

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) { return (os << fixed.toFloat()); }

//comparison operators:
bool Fixed::operator==(const Fixed &b) const { return (this->_fixedPoint == b._fixedPoint); }

bool Fixed::operator!=(const Fixed &b) const { return (this->_fixedPoint != b._fixedPoint); }

bool Fixed::operator>=(const Fixed &b) const { return (this->_fixedPoint >= b._fixedPoint); }

bool Fixed::operator<=(const Fixed &b) const { return (this->_fixedPoint <= b._fixedPoint); }

bool Fixed::operator>(const Fixed &b) const { return (this->_fixedPoint > b._fixedPoint); }

bool Fixed::operator<(const Fixed &b) const { return (this->_fixedPoint < b._fixedPoint); }

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &b) const
{
	Fixed result;
	result._fixedPoint = this->_fixedPoint + b._fixedPoint;
	return (result);
}

Fixed Fixed::operator-(const Fixed &b) const
{
	Fixed result;
	result._fixedPoint = this->_fixedPoint - b._fixedPoint;
	return (result);
}

Fixed Fixed::operator*(const Fixed &b) const
{
	Fixed result;
	result._fixedPoint = (this->_fixedPoint * b._fixedPoint) >> _fractionalBits;
	return (result);
}

Fixed Fixed::operator/(const Fixed &b) const
{
    Fixed result;
    result._fixedPoint = (this->_fixedPoint << _fractionalBits) / b._fixedPoint;
    return (result);
}

//increment/decrement operators
Fixed& Fixed::operator++()
{
    ++this->_fixedPoint;
    return (*this);
}

Fixed& Fixed::operator--()
{
    --this->_fixedPoint;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed result;
    result._fixedPoint = this->_fixedPoint++;
    return (result);
}

Fixed Fixed::operator--(int)
{
    Fixed result;
    result._fixedPoint = this->_fixedPoint--;
    return (result);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a > b)
        return(b);
    return (a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a < b)
        return(b);
    return (a);
}

Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return((Fixed&)b);
    return ((Fixed&)a);
}

Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return((Fixed&)b);
    return ((Fixed&)a);
}