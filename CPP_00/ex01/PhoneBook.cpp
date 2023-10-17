/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 02:27:31 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/17 04:47:10 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int isAlphabetic(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (!std::isalpha(str[i]) || std::isdigit(str[i]))
            return 0;
    }
    return 1;
}

void PhoneBook::addContact()
{
    static int i = 0;
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;

    std::cout << "[Contact Fields]" << std::endl;
    std::cout << "First Name: ";
    std::getline(std::cin, FirstName);
    if (std::cin.eof())
            exit(1);
    if (FirstName.empty() || !isAlphabetic(FirstName))
    {
        std::cout << "First Name is empty" << std::endl;
        exit(1);
    }
    contact[i].setFirstName(FirstName);
    std::cout << "Last Name: ";
    std::getline(std::cin, LastName);
    if (std::cin.eof())
            exit(1);
    contact[i].setLastName(LastName);
    std::cout << "Nickname: ";
    std::getline(std::cin, NickName);
    if (std::cin.eof())
            exit(1);
    contact[i].setNickname(NickName);
    std::cout << "Phone Number: ";
    std::getline(std::cin, PhoneNumber);
    if (std::cin.eof())
            exit(1);
    contact[i].setPhoneNumber(PhoneNumber);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, DarkestSecret);
    if (std::cin.eof())
            exit(1);
    contact[i].setDarkestSecret(DarkestSecret);
    
    std::cout << "Contact added successfully" << std::endl;
    std::cout <<"[" << contact[i].getFirstName() <<"]"<< std::endl;
    std::cout <<"[" << contact[i].getLastName() <<"]"<< std::endl;
    std::cout <<"[" <<  contact[i].getNickname() <<"]"<< std::endl;
    std::cout <<"[" <<  contact[i].getPhoneNumber() <<"]"<< std::endl;
    std::cout <<"[" <<  contact[i].getDarkestSecret() <<"]"<< std::endl;
    i++;
    if (i == 8)
        i = 0;
}

