/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:08:37 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/23 16:39:51 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request", 72, 45, "none") {
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("robotomy request", 72, 45, target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs)
	: AForm(rhs) {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	AForm::operator=(rhs);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	AForm::execute(executor);

	std::srand(std::time(0));
	int result = std::rand() % 2;
	std::cout << "Drilling noises... *Bzzzzt*...\n";

	if (result == 0) {
	std::cout << getTarget() << " has been robotomized successfully 50% of the time.\n";
	} else {
		std::cout << "Robotomy failed on " << getTarget() << ".\n";
	}

}
