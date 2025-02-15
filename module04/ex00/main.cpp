/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:59:29 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 04:13:12 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main() {

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

    std::cout << "---------------WRONG---------------" << std::endl;

    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wi = new WrongCat();

    std::cout << wi->getType() << " " << std::endl;
    wi->makeSound();
    wmeta->makeSound();
    delete wmeta;
    delete wi;

    return 0;
}
