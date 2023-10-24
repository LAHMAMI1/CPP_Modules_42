/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:50:20 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/24 02:12:57 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char const *argv[])
{
    if (argc == 4)
    {
        std::ifstream file(argv[1]);
        if (file.is_open())
            sed(argv, file);
        else
            std::cout << "Error: " << argv[1] << " file not opned" << std::endl;
    }
    else
        std::cout << "Usage: ./replace <filename> <string to replace> <string to replace with>" << std::endl;
    return 0;
}
