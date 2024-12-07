/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:34:26 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/07 14:45:14 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FileReplacer.hpp"

int main(int ac , char *av[]) {

	if (ac != 4) {
		std::cout << "Invalid arguments: should run it as folow ";
		std::cout << "sed filename [toreplace] [with]" << std::endl;
		return (1);
	}
	std::string filename(av[1]);
	std::string target(av[2]);
	std::string replacment(av[3]);
	FileReplacer::replace(filename, target, replacment);
	return 0;
}
