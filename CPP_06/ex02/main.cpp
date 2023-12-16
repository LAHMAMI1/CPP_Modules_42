/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 21:00:19 by olahmami          #+#    #+#             */
/*   Updated: 2023/12/16 17:06:52 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int main()
{
    Base *base = generate();
    identify(base);
    identify(*base);
    // identify(NULL);// in case NULL
    delete base;
    return (0);
}