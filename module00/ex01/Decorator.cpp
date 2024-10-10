/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Decorator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:12:43 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/09 15:31:38 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Decorator.hpp"

static std::string replaceTabsWithSpaces(const std::string& input) {
    std::string     output;

    output.reserve(input.size());
    for (size_t i = 0; i < input.length(); i++) {
        if (input[i] == '\t')
            output.append(4, ' ');
        else
            output.push_back(input[i]);
    }
    return output;
}

Decorator& Decorator::getInstance() {
    static Decorator decorator;
    return decorator;
}

Decorator& Decorator::line(int length) {
    for (int i = 0; i < length; i++)
    {
        if (i == 0 || i == (length -1))
            std::cout << "+";
        else
            std::cout << "-";
    }
    std::cout << std::endl;
    return *this;
}

Decorator& Decorator::head(std::string label) {
    std::cout << "|\t\t\t"<< label << "\t\t\t|" << std::endl;
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
    std::cout << "|" << std::setw(11) << std::setfill('-');
    return *this;
}

Decorator& Decorator::separator() {
    for (size_t i = 0; i < 4; i++)
        chunck();
    return *this;
}

Decorator& Decorator::middle() {
    std::cout << "|" << std::endl;
    separator();
    std::cout << "|";
    return *this;
}

Decorator& Decorator::fillCol(std::string str) {
    std::cout << "|";
    if (str.find('\t') != str.npos)
        str = replaceTabsWithSpaces(str);
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
    {
        std::cout << "|" << std::endl;
        Decorator::getInstance().line(len);
    }
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
