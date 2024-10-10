/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseContact.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:11:58 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/09 14:43:38 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BaseContact_hpp
#define BaseContact_hpp

#include <iostream>
#include <string>

#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define BLUE        "\033[34m"
#define RESET       "\033[0m"

const std::string   INDEX = "index";
const std::string   FNAME = "first name";
const std::string   LNAME = "last name";
const std::string   NNAME = "nick name";
const std::string   PNUMB = "phone number";
const std::string   DSECR = "dark secret";

class BaseContact {

private:
    std::string     firstName;
    std::string     lastName;
    std::string     nickName;
    std::string     phoneNumber;
    std::string     darkestSecret;

public:
    BaseContact&    setFirstName(std::string firstName);
    std::string     getFirstName() const;
    BaseContact&    setLastName(std::string lastName);
    std::string     getLastName() const;
    BaseContact&    setNickName(std::string nickName);
    std::string     getNickName() const;
    BaseContact&    setPhoneNumber(std::string phoneNumber);
    std::string     getPhoneNumber() const;
    BaseContact&    setDarkestSecret(std::string darkestSecret);
    std::string     getDarkestSecret() const;
};

#endif
