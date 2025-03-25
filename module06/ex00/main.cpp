/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:10:18 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/25 20:35:59 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
	
	if (argc != 2) {
		std::cout << "Error" << std::endl;
		return 1;
	}

	ScalarConverter::convert(argv[1]);

	return 0;
}
