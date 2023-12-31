/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:41:46 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/18 18:08:11 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <locale>
#include <iomanip>
#include <sstream>

class PhoneBook
{
    private:
        Contact contact[8];
        int     count;
    public:
        void addContact();
        void searchContact();
};

int isName(std::string str);
int allSpaces(std::string str);
int isNumber(std::string str);
#endif