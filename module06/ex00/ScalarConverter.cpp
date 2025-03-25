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

void ScalarConverter::convert(const char *str) {
	
	std::cout << "char: " << str << std::endl;
	// std::cout << "int: " << getResult() << std::endl;
	// std::cout << "float: " << getResult() << std::endl;
	// std::cout << "double: " << getResult() << std::endl;
}