/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifier.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:19:04 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/25 20:13:35 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Identifier.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Identifier::Identifier() {
}

Identifier::Identifier(const Identifier& rhs) {
	(void)rhs;
}

Identifier& Identifier::operator=(const Identifier& rhs) {
	(void)rhs;
	return *this;
}

Identifier::~Identifier() {
}

Base* Identifier::getA() {
	return new A();
}

Base* Identifier::getB() {
	return new B();
}

Base* Identifier::getC() {
	return new C();
}

Base *Identifier::generate(void) {

	typedef Base* (Identifier::*Target)();

    const Target generated[] = {
        &Identifier::getA,
        &Identifier::getB,
        &Identifier::getC,
    };
	std::srand(std::time(0));

	return (this->*generated[std::rand() % 3])();
}

void Identifier::identify(Base* p) {

	if (dynamic_cast<A*>(p))
		std::cout << "pointer p point to : A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "pointer p point to : B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "pointer p point to : C" << std::endl;
	else
		std::cout << "p point to NULL pointer" << std::endl;
}

void Identifier::identify(Base& p) {

	Base b;
	try {
		b = dynamic_cast<A&>(p);
		std::cout << "reference p refer to : A" << std::endl;
	} catch(const std::bad_cast& e) {
		try {
			b = dynamic_cast<B&>(p);
			std::cout << "reference p refer to : B" << std::endl;
		} catch(const std::bad_cast& e) {
			try {
				b = dynamic_cast<C&>(p);
			std::cout << "reference p refer to : C" << std::endl;
			} catch(const std::bad_cast& e) {
				std::cout << "p point to NULL pointer" << std::endl;
			}
		}
	}
}
