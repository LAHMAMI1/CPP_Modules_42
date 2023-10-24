/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 02:03:23 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/24 02:13:39 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void sed( char const *argv[], std::ifstream &file)
{
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string textFile;
    std::string text_tmp;

    std::getline(file, textFile, '\0');
    if (s1.empty() || s2.empty() || textFile.empty())
    {
        std::cout << "Error: empty string" << std::endl;
            exit(1);
    }
    size_t pos = textFile.find(s1);
    while (pos != std::string::npos)
    {
        text_tmp = textFile.substr(pos + s1.length());
        textFile = textFile.substr(0, pos) + s2 + text_tmp;
        pos = textFile.find(s1, pos + s2.length());
    }
    std::ofstream newFile(std::string(argv[1]) + ".replace");
    newFile << textFile;
    file.close();
    newFile.close();
}