/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:15:02 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/25 20:35:09 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <cmath>

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs) {
	(void)rhs;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs) {
	(void)rhs;
	return *this;
}

ScalarConverter::~ScalarConverter() {
}
// ScalarConverter.cpp
#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cerrno>

static bool isChar(const std::string &s) {
    return s.length() == 1 && !std::isdigit(s[0]) && isprint(s[0]);
}

static bool isInt(const std::string &s) {
    char *end;
    errno = 0;
    std::strtol(s.c_str(), &end, 10);
    return *end == '\0' && errno == 0;
}

static bool isFloat(const std::string &s) {
    if (s == "nanf" || s == "+inff" || s == "-inff") return true;
    if (s.back() != 'f') return false;
    char *end;
    errno = 0;
    std::strtof(s.c_str(), &end);
    return *(end + 1) == '\0' && errno == 0;
}

static bool isDouble(const std::string &s) {
    if (s == "nan" || s == "+inf" || s == "-inf") return true;
    char *end;
    errno = 0;
    std::strtod(s.c_str(), &end);
    return *end == '\0' && errno == 0;
}

void ScalarConverter::convert(const std::string &s) {
    if (isChar(s)) {
        char c = s[0];
        int i = static_cast<int>(c);
        float f = static_cast<float>(c);
        double db = static_cast<double>(c);

        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << db << std::endl;

    } else if (isInt(s)) {
        int i = std::atoi(s.c_str());
        char c = static_cast<char>(i);
        float f = static_cast<float>(i);
        double db = static_cast<double>(i);

        std::cout << "char: ";
        if (i < 0 || i > 127)
            std::cout << "impossible" << std::endl;
        else if (std::isprint(c))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;

        std::cout << "int: " << i << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << db << std::endl;

    } else if (isFloat(s)) {
        float f = std::strtof(s.c_str(), nullptr);
        char c = static_cast<char>(f);
        int i = static_cast<int>(f);
        double db = static_cast<double>(f);

        std::cout << "char: ";
        if (std::isnan(f) || f < 0 || f > 127)
            std::cout << "impossible" << std::endl;
        else if (std::isprint(c))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;

        std::cout << "int: ";
        if (std::isnan(f) || f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
            std::cout << "impossible" << std::endl;
        else
            std::cout << i << std::endl;

        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << db << std::endl;

    } else if (isDouble(s)) {
        double db = std::strtod(s.c_str(), nullptr);
        char c = static_cast<char>(db);
        int i = static_cast<int>(db);
        float f = static_cast<float>(db);

        std::cout << "char: ";
        if (std::isnan(db) || db < 0 || db > 127)
            std::cout << "impossible" << std::endl;
        else if (std::isprint(c))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;

        std::cout << "int: ";
        if (std::isnan(db) || db > std::numeric_limits<int>::max() || db < std::numeric_limits<int>::min())
            std::cout << "impossible" << std::endl;
        else
            std::cout << i << std::endl;

        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << db << std::endl;

    } else {
        std::cout << "Invalid" << std::endl;
    }
}

// static bool isChar(const std::string &str) {
//     return str.length() == 1 && !std::isdigit(str[0]);
// }

// static bool isInt(const std::string &str) {
//     char *end;
//     std::strtol(str.c_str(), &end, 10);
//     return *end == '\0';
// }

// static bool isFloat(const std::string &str) {
//     if (str == "nanf" || str == "+inff" || str == "-inff") return true;
//     if (str.back() != 'f') return false;
//     char *end;
//     std::strtof(str.c_str(), &end);
//     return *(end + 1) == '\0';
// }

// static bool isDouble(const std::string &str) {
//     if (str == "nan" || str == "+inf" || str == "-inf") return true;
//     char *end;
//     std::strtod(str.c_str(), &end);
//     return *end == '\0';
// }

// static double toDouble(const std::string s) {
//     double d;
//     if (isChar(s)) {
//         char c = s[0];
//         d = static_cast<double>(c);
//     } else if (isInt(s)) {
//         d = static_cast<double>(std::atoi(s.c_str()));
//     } else if (isFloat(s)) {
//         d = static_cast<double>(std::strtof(s.c_str(), nullptr));
//     } else if (isDouble(s)) {
//         d = std::strtod(s.c_str(), nullptr);
//     } else {
//         std::cout << "Invalid s" << std::endl;
//         exit(1);
//     }
//     return d;
// }

// void ScalarConverter::convert(const char *str) {

//     std::string s = str;
//     double d = toDouble(s);
//     // char
//     std::cout << "char: ";
//     if (std::isnan(d) || d < 0 || d > 127)
//         std::cout << "impossible" << std::endl;
//     else if (std::isprint(static_cast<char>(d)))
//         std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
//     else
//         std::cout << "Non displayable" << std::endl;
//     std::cout << "int: ";
//     if (std::isnan(d) || d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
//         std::cout << "impossible" << std::endl;
//     else
//         std::cout << static_cast<int>(d) << std::endl;
//     std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
//     std::cout << "double: " << d << std::endl;
// }
