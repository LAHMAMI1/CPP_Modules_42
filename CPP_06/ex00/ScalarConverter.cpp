/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:49:58 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/17 10:21:31 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &sc)
{
    (void)sc;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &sc)
{
    (void)sc;
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

//parse the literal
static bool nonDisplayable(const std::string& literal)
{
    for (size_t i = 0; i < literal.length(); i++)
    {
        if (!isprint(literal[i]) || isspace(literal[i]))
            return (true);
    }
    return (false);
}

void ScalarConverter::convert(const std::string& literal)
{
    if (nonDisplayable(literal))
    {
        std::cerr << "Non displayable argument" << std::endl;
        return ;
    }

    if (literal == "nanf" || literal == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (literal == "+inff" || literal == "+inf")
    {
        std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << std::numeric_limits<int>::max() << std::endl;
        std::cout << "float: " << std::numeric_limits<float>::max() << std::endl;
        std::cout << "double: " << std::numeric_limits<double>::max() << std::endl;
    }
    else if (literal == "-inff" || literal == "-inf")
    {
        std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << std::numeric_limits<int>::min() << std::endl;
        std::cout << "float: " << std::numeric_limits<float>::min() << std::endl;
        std::cout << "double: " << std::numeric_limits<double>::min() << std::endl;
    }
    else
    {
        std::istringstream iss(literal);
        double d;
        if (!(iss >> d)) {
            std::cerr << "Invalid input" << std::endl;
            return ;
        }

        char c = static_cast<char>(d);
        int i = static_cast<int>(d);
        float f = static_cast<float>(d);

        std::cout << "char: ";
        if (std::isprint(c) && !isspace(c))
            std::cout << "'" << c << "'";
        else std::cout << "Non displayable";
        std::cout << std::endl;

        size_t position = literal.find('.');
        size_t end = literal.at(literal.length() - 1) == 'f' ? literal.length() - 2 : literal.length() - 1;
        int precision = (position != std::string::npos) ? end - position : 0;

        std::cout << "int: " << i << std::endl;
        std::cout << "float:" << std::fixed << std::setprecision(precision) << f << "f" << std::endl;
        std::cout << "double:" << std::fixed << std::setprecision(precision) << d << std::endl;
    }
}