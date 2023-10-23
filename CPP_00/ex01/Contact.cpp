/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 03:56:07 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/21 01:59:23 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() const { return FirstName; }
std::string Contact::getLastName() const { return LastName; }
std::string Contact::getNickname() const { return NickName; }
std::string Contact::getPhoneNumber() const { return PhoneNumber; }
std::string Contact::getDarkestSecret() const { return DarkestSecret; }

void Contact::setFirstName(std::string const& firstName) { FirstName = firstName; }
void Contact::setLastName(std::string const& lastName) { LastName = lastName; }
void Contact::setNickname(std::string const& nickname) { NickName = nickname; }
void Contact::setPhoneNumber(std::string const& phoneNumber) { PhoneNumber = phoneNumber; }
void Contact::setDarkestSecret(std::string const& darkestSecret) { DarkestSecret = darkestSecret; }