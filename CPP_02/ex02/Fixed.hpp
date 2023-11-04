/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:21:23 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/04 02:14:21 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
  private:
	int _fixedPoint;
	const static int _fractionalBits;

  public:
  	//Orthodox Canonical Form
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);
	~Fixed();

	Fixed(const int integer);
	Fixed(const float floating);

	float toFloat(void) const;
	int toInt(void) const;

	bool operator==(const Fixed &b) const;
	bool operator!=(const Fixed &b) const;
	bool operator>=(const Fixed &b) const;
	bool operator<=(const Fixed &b) const;
	bool operator>(const Fixed &b) const;
	bool operator<(const Fixed &b) const;

	Fixed operator+(const Fixed &b) const;
	Fixed operator-(const Fixed &b) const;
	Fixed operator*(const Fixed &b) const;
	Fixed operator/(const Fixed &b) const;

	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);

    static Fixed	&min(Fixed &a, Fixed &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	static Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif