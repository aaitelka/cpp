/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Decorator.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:13:10 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/07 11:14:07 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Decorator_hpp
#define Decorator_hpp

#include <iomanip>
#include "Contact.hpp"

class Decorator {

public:
    static Decorator& getInstance();
    Decorator& line(int length);
    Decorator& head(std::string label, int length);
    Decorator& println(std::string label, std::string info);
    Decorator& printCol(std::string label);
    Decorator& fillCol(std::string str);
    Decorator& fillRow(Contact& contact, size_t row, size_t size, int len);
    Decorator& chunck();
    Decorator& separator();
    Decorator& middle();
    Decorator& fillHeader();
};

#endif
