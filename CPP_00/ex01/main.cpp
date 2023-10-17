/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 03:54:25 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/17 04:01:58 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;

    while (1)
    {
        std::string cmd;
        std::cout << "ENTER ONE COMMAND [ADD] or [SEARCH] or [EXIT]: " << std::endl;
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            exit(1);
        if (cmd == "ADD")
            phonebook.addContact();
        else if (cmd == "SEARCH")
            {
                std::cout << "SEARCH" << std::endl;
            }
        else if (cmd == "EXIT")
            exit(0);
        else
            std::cout << "Wrong entries\nTRy: [ADD] or [SEARCH] or [EXIT]" << std::endl;
    }
    return 0;
}
