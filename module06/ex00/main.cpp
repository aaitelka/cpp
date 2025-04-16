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

int main(int ac, char *av[]) {

	if (ac != 2) {
		std::cout << "Error" << std::endl;
		return (1);
	}
    ScalarConverter::convert(av[1]);
    return 0;
}
