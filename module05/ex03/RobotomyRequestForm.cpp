/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:08:37 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/20 12:27:58 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request", 72, 45) {
	_target = "any";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("robotomy request", 72, 45) {
		_target = target;
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

	if (isSigned() && executor.getGrade() <= getExecGrade()) {	
		std::srand(std::time(0));
		int result = std::rand() % 2;
		std::cout << "Drilling noises... *Bzzzzt*...\n";
		
		if (result == 0) {
			std::cout << _target << " has been robotomized successfully 50% of the time.\n";
		} else {
			std::cout << "Robotomy failed on " << _target << ".\n";
		}
	} else {
		throw GradeTooHighException("Attempting to execute form");
	}
}
