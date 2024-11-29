/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Decorator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:12:43 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/25 23:29:46 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Decorator.hpp"

Decorator& Decorator::getInstance() {
    static Decorator decorator;
    return decorator;
}

Decorator& Decorator::line(int length) {
    for (int i = 0; i < length; i++)
    {
        if (i == 0 || i == (length -1))
            std::cout << BLUE << "+" << RESET;
        else
            std::cout << "-";
    }
    std::cout << std::endl;
    return *this;
}

Decorator& Decorator::head(std::string label, bool footer) {
    line(TW);
    std::cout << "|" << std::setw(34) << label << std::setw(11) << "|\n";
    if (footer)
    {   
        line(TW);
    }
    return *this;
}

Decorator& Decorator::println(std::string label, std::string info) {
    std::cout << BLUE << label << info << RESET << std::endl;
    return *this;
}

Decorator& Decorator::printCol(std::string label) {
    std::cout << std::setw(10) << std::setfill(' ') << label;
    return *this;
}

Decorator& Decorator::chunck() {
    std::cout << "|" << RESET << std::setw(11) << std::setfill('-');
    return *this;
}

Decorator& Decorator::separator() {
    for (size_t i = 0; i < 4; i++)
        chunck();
    return *this;
}

Decorator& Decorator::middle() {
    println("|", "");
    separator();
    std::cout << "|";
    return *this;
}

Decorator& Decorator::fillCol(std::string str) {
    std::cout << BLUE << "|" << RESET;
    if (str.length() > 10)
        str.replace(9, 9, ".");
    printCol(str.substr(0, 10));
    return *this;
}

Decorator& Decorator::fillRow(Contact& contact, size_t row, size_t size, int len) {
    fillCol(contact.getId());
    fillCol(contact.getFirstName());
    fillCol(contact.getLastName());
    fillCol(contact.getNickName());
    if (row == (size - 1))
        Decorator::getInstance().println("|", "").line(len);
    else
        middle();
	std::cout << std::endl;
    return *this;
}

Decorator& Decorator::fillHeader() {
    fillCol(INDEX);
    fillCol(FNAME);
    fillCol(LNAME);
    fillCol(NNAME);
    middle();
    std::cout << std::endl;
    return *this;
}
