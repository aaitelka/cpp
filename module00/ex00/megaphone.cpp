/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:28:28 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/02 14:44:48 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[]) {
	
	std::string	str;
	
	if (ac > 1) {
		for (int i = 1; i < ac; i++) {
			str = av[i];
			for (int j = 0; j < str.length(); j++) {
				std::putchar(std::toupper(str[j]));
			}
		}
	} else 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
