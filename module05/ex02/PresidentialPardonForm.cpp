/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:36:39 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/23 16:25:30 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon", 25, 5, "none") {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("presidential pardon", 25, 5, target) {
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
	
	AForm::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox\n";

}
