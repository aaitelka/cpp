/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:59:29 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/06 08:31:30 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.h"
#include "Dog.h"
#include "Cat.h"

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"

int main() {

	// const int size = 2;
	// AAnimal *animals[size] = {0};
	

	std::cout << GREEN << "\n░░░░░░░░░░[ create ]░░░░░░░░░░\n\n" << RESET;
	// for (size_t i = 0; i < size; i++) {
	// 	if (i == (size / 2)) {
	// 		std::cout << GREEN << "------------------------------\n" << RESET;
	// 	}
	// 	if (i < (size / 2)) {
	// 		animals [i] = new Cat();
	// 	} else {
	// 		animals[i] = new Dog();
	// 	}
	// }
	Cat *cat = new Cat();
	Cat *cat2 = new Cat();

	cat->makeSound();


	std::cout << "cat : " << &cat << std::endl;
	cat2 = cat;
	std::cout << "cat : " << &cat2 << std::endl;

	delete cat;
	// std::cout << cat2.getType();
	// cat2->makeSound();
	// while (true);

	// delete cat2;
	std::cout << RED << "\n░░░░░░░░░░[ delete ]░░░░░░░░░░\n\n" << RESET;
	// for (size_t i = 0; i < size; i++) {
	// 	if (i == (size / 2)) {
	// 		std::cout << RED << "------------------------------\n" << RESET;
	// 	}
	// 	delete animals[i];
	// }
	return 0;
}
