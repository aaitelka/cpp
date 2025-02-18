/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:59:29 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 17:53:44 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"

int main() {

	std::cout << GREEN << "\n░░░░░░░░░░[ CORRECT ]░░░░░░░░░░\n\n" << RESET;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;

	std::cout << RED << "\n░░░░░░░░░░[ WRONG ]░░░░░░░░░░\n\n" << RESET;

    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wi = new WrongCat();

    std::cout << wi->getType() << " " << std::endl;
    wi->makeSound();
    wmeta->makeSound();
    delete wmeta;
    delete wi;

    return 0;
}
