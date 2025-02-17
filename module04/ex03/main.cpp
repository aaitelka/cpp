/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:46:50 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 01:15:07 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include "MateriaSource.h"
// #include "Character.h"
// #include "Cure.h"
// #include "Ice.h"

// void leaks() __attribute__ ((constructor));
void leaks() {system("leaks prog");}

int main() {

	atexit(leaks);
	// AMateria *obj = new Ice();
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(obj);
	// src->learnMateria(obj);
	// src->learnMateria(obj);
	// src->learnMateria(obj);
	// src->learnMateria(obj);

	// ICharacter* me = new Character("me");

	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("l");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("ice");
	// me->equip(tmp);

	// me->unequip(0);
	// me->unequip(1);

	// ICharacter* bob = new Character("bob");
	// me->use(-1, *bob);
	// me->use(0, *bob);
	// me->use(1, *bob);
	// me->use(2, *bob);
	// me->use(3, *bob);
	// me->use(4, *bob);
	
	// delete bob;
	// delete me;
	// delete src;
	// delete obj;
	return 0;
}
