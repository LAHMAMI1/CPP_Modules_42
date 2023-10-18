/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 02:27:31 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/18 04:54:37 by olahmami         ###   ########.fr       */
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

void PhoneBook::addContact()
{
    static int i = 0;
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;

    std::cout << "[Contact Fields]" << std::endl;
    do
    {
        std::cout << "First Name: ";
        std::getline(std::cin, FirstName);
        if (std::cin.eof())
            exit(1);
    } while (FirstName.empty() || !isName(FirstName) || allSpaces(FirstName));
    do
    {
        std::cout << "Last Name: ";
        std::getline(std::cin, LastName);
        if (std::cin.eof())
            exit(1);
    } while (LastName.empty() || !isName(LastName) || allSpaces(LastName));
    do
    {
        std::cout << "Nickname: ";
        std::getline(std::cin, NickName);
        if (std::cin.eof())
                exit(1);
    } while (NickName.empty() || !isName(NickName) || allSpaces(NickName));
    do
    {
        std::cout << "Phone Number: ";
        std::getline(std::cin, PhoneNumber);
        if (std::cin.eof())
                exit(1);
    } while (PhoneNumber.empty() || !isNumber(PhoneNumber) || allSpaces(PhoneNumber));
    do
    {
        std::cout << "Darkest Secret: ";
        std::getline(std::cin, DarkestSecret);
        if (std::cin.eof())
                exit(1);
    } while (DarkestSecret.empty() || !isName(DarkestSecret) || allSpaces(DarkestSecret));

    contact[i].setFirstName(FirstName);
    contact[i].setLastName(LastName);
    contact[i].setNickname(NickName);
    contact[i].setPhoneNumber(PhoneNumber);
    contact[i].setDarkestSecret(DarkestSecret);
    i++;
    count = i;
    if (i == 8)
        i = 0;
}

void PhoneBook::searchContact()
{
    std::string index;
    if (!(count > 0 && count < 9))
    {
        std::cout << "No contacts to show" << std::endl;
        return ;
    }
    std::cout << "     Index|First Name| Last Name|  NickName" << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        if (contact[i].getFirstName().length() > 10)
            std::cout << contact[i].getFirstName().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << contact[i].getFirstName() << "|";
        if (contact[i].getLastName().length() > 10)
            std::cout << contact[i].getLastName().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << contact[i].getLastName() << "|";
        if (contact[i].getNickname().length() > 10)
            std::cout << contact[i].getNickname().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << contact[i].getNickname() << "|" << std::endl;
    }
    
    std::cout << "Enter the index of the contact: ";
    std::getline(std::cin, index);
    if (std::cin.eof())
        exit(1);
    if (index.length() > 1 || !std::isdigit(index[0]))
    {
        std::cout << "Wrong index" << std::endl;
        return ;
    }
    int num;
    std::istringstream(index) >> num;
    if (num < 1 || num > count)
    {
        std::cout << "Wrong index" << std::endl;
        return ;
    }
    
    std::cout << "First Name: " << contact[num - 1].getFirstName() << std::endl;
    std::cout << "Last Name: " << contact[num - 1].getLastName() << std::endl;
    std::cout << "Nickname: " << contact[num - 1].getNickname() << std::endl;
    std::cout << "Phone Number: " << contact[num - 1].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact[num - 1].getDarkestSecret() << std::endl;
}