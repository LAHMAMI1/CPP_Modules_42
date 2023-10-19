/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:53:43 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/18 17:54:30 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int isName(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isprint(str[i]))
            return 0;
    }
    return 1;
}

int allSpaces(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isspace(str[i]))
            return 0;
    }
    return 1;
}

int isNumber(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return 0;
    }
    return 1;
}