/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:29:25 by olahmami          #+#    #+#             */
/*   Updated: 2023/10/19 01:51:40 by olahmami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;

    public:
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;

        void setFirstName(const std::string& firstName);
        void setLastName(const std::string& lastName);
        void setNickname(const std::string& nickname);
        void setPhoneNumber(const std::string& phoneNumber);
        void setDarkestSecret(const std::string& darkestSecret);
};

#endif
 