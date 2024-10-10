/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:12:16 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/09 15:13:31 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static bool allWithSpaces(std::string input) {
    for (size_t i = 0; i < input.length(); i++) {
        if (isprint(input[i]))
            return false;
    }
    return true;
}

Contact& Contact::setId(std::string id) {
    mId = id;
    return *this;
}

std::string Contact::getId() const {
    return mId;
}

bool Contact::isEmpty() {
    return (getId().empty()
            || getFirstName().empty()
            || getLastName().empty()
            || getNickName().empty()
            || getPhoneNumber().empty()
            || getDarkestSecret().empty());
}

bool Contact::isBlank() {
    return (allWithSpaces(getFirstName())
            || allWithSpaces(getLastName())
            || allWithSpaces(getNickName())
            || allWithSpaces(getPhoneNumber())
            || allWithSpaces(getDarkestSecret()));
}

bool Contact::hasEmptyOrBlankFiled() {
    return (isBlank() || isEmpty());
}
