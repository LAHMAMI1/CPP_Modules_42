/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:21:21 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/31 22:18:43 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPoint = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPoint = fixed._fixedPoint;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPoint = fixed._fixedPoint;
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPoint = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    _fixedPoint = integer << _fractionalBits;
}

int Fixed::toInt( void ) const
{
    return (_fixedPoint >> _fractionalBits);
}

Fixed::Fixed(const float floating)
{
    std::cout << "Float constructor called" << std::endl;
    _fixedPoint = (int)(roundf(floating * (1 << _fractionalBits)));
}

float Fixed::toFloat( void ) const
{
    return ((float)_fixedPoint / (float)(1 << _fractionalBits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    return (os << fixed.toFloat());
}