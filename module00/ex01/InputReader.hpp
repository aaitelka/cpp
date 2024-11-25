/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputReader.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:52:31 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/24 19:12:59 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INPUT_READER_HPP_
#define _INPUT_READER_HPP_


#include <iostream>
#include <string>
#include "PhoneBook.hpp"

enum Fields {
    FIRST_NAME,
    LAST_NAME,
    NICK_NAME,
    PHONE_NUMBER,
    DARKEST_SECRET
};

class InputReader {

private:
    Contact contact;

public:
    Contact     read(Contact& contact, Fields field);

};

#endif
