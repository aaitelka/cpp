/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:36:39 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/18 17:11:09 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("pres", 25, 5) {
	_target = "any";	
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("pres", 25, 5) {
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs) 
	: AForm(rhs) {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
	AForm::operator=(rhs);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (isSigned() && executor.getGrade() <= getExecGrade()) {
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
	} else {
		throw GradeTooHighException("Attempting to execute form");
	}
}
