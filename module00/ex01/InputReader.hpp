/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputReader.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:52:31 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/02 16:30:06 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INPUT_READER_HPP_
#define _INPUT_READER_HPP_

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"

const std::string INDEX = "index";
const std::string FNAME = "first name";
const std::string LNAME = "last name";
const std::string NNAME = "nick name";
const std::string PNUMB = "phone number";
const std::string DSECR = "darkest secret";

enum Fields {
    FIRST_NAME,
    LAST_NAME,
    NICK_NAME,
    PHONE_NUMBER,
    DARKEST_SECRET
};

class InputReader {

public:
    void     read(Contact& contact, Fields field);

};

#endif
