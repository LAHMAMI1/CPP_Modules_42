/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 23:37:03 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/15 23:37:04 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; j < (int) strlen(argv[i]); j++)
                std::cout << (char) toupper(argv[i][j]);
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
