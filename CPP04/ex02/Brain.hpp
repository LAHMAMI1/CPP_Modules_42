/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:45:39 by olahmami          #+#    #+#             */
/*   Updated: 2023/11/09 04:15:23 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        //Orthodox Canonical Form
        Brain();
        Brain(const Brain& Brain);
        Brain &operator=(const Brain& Brain);
        ~Brain();
        
};
