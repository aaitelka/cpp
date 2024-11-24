/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:28:28 by aaitelka          #+#    #+#             */
/*   Updated: 2024/11/24 23:06:28 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[]) {

	if (ac > 1) {
		for (int i = 1; i < ac; i++) {
			std::string str = av[i];
			size_t len = str.length();
			for (size_t j = 0; j < len; j++) {
				std::putchar(std::toupper(str[j]));
			}
		}
	} else {		
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return 0;
}
