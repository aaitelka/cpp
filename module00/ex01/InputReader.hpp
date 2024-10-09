/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputReader.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:14:56 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/09 08:14:13 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef InputReader_hpp
#define InputReader_hpp

#include "BaseContact.hpp"

enum InputType {
    FIRST_NAME,
    LAST_NAME,
    NICK_NAME,
    PHONE_NUMBER,
    DARKEST_SECRET
};

class InputReader : public BaseContact {

public:
    std::string read(InputType input);

};

#endif
