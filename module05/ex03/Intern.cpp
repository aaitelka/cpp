/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:08:34 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/20 11:22:23 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern& rhs) {
	(void)rhs;
}

Intern& Intern::operator=(const Intern& rhs) {
	(void)rhs;
	return *this;
}

Intern::~Intern() {
}

AForm* Intern::createRobotomyRequest(const std::string& target) {
	return new RobotomyRequestForm(target);
}

AForm *Intern::createShrubberyCreation(const std::string& target) {
	return new ShrubberyCreationForm(target);
}

AForm *Intern::createPresidentialPardon(const std::string& target) {
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) {

	typedef AForm* (Intern::*FormCreator)(const std::string&);

    const std::string names[] = {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon"
    };

    const FormCreator creators[] = {
        &Intern::createRobotomyRequest,
        &Intern::createShrubberyCreation,
        &Intern::createPresidentialPardon
    };

    for (int i = 0; i < 3; ++i) {
        if (formName == names[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*creators[i])(target);
        }
    }

    std::cout << "Error: Form '" << formName << "' not found!" << std::endl;
	return NULL;
}
