/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:12:20 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/07 11:12:21 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_hpp
#define Contact_hpp

#include <iostream>
#include <string>
#include "BaseContact.hpp"

class Contact : public BaseContact {

private:
    std::string mId;
    bool isEmpty();
    bool isBlank();

public:
    Contact& setId(std::string id);
    std::string getId() const;
    bool hasEmptyOrBlankFiled();
};

#endif
