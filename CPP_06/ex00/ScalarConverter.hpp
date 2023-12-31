/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:13:59 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/12 21:34:53 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <sstream>
#include <iomanip>
#include <limits>

class ScalarConverter
{
    private:
        ScalarConverter();

    public:
        //Orthodox Canonical Form
        ScalarConverter(const ScalarConverter &sc);
        ScalarConverter &operator=(const ScalarConverter &sc);
        ~ScalarConverter();
        
        //Methods
        static void convert(const std::string& literal);
};
