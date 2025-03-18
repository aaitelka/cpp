/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:08:37 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/18 12:15:02 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("nn", 72, 45) {
	_target = "any";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("nn", 72, 45) {
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
		
	} else {
		throw GradeTooHighException("Attempting to execute form");
	}
}
