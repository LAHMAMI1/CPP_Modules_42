/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 03:56:07 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/18 04:09:23 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Getter function definitions
std::string Contact::getFirstName()
{
    return FirstName;
}

std::string Contact::getLastName()
{
    return LastName;
}

std::string Contact::getNickname()
{
    return NickName;
}

std::string Contact::getPhoneNumber()
{
    return PhoneNumber;
}

std::string Contact::getDarkestSecret()
{
    return DarkestSecret;
}

// Setter function definitions
void Contact::setFirstName(std::string firstName)
{
   FirstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    LastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    NickName = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    PhoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    DarkestSecret = darkestSecret;
}