/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 23:37:03 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/19 00:01:31 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string str = argv[i];
            for (size_t j = 0; j < str.length(); j++)
                std::cout << (char) toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
    return 0;
}
