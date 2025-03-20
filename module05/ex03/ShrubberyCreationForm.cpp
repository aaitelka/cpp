/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:09:14 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/18 18:24:18 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137) {
	_target = "any";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("shrubbery creation", 145, 137) {
		_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs)
	: AForm(rhs) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	AForm::operator=(rhs);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (isSigned() && executor.getGrade() <= getExecGrade()) {
		try {
			const std::string filename = _target + "_shrubbery";
			std::ofstream file(filename.c_str());
			file << "          &&& &&  & &&\n";
        	file << "      && &\\/&\\|& ()|/ @, &&\n";
        	file << "      &\\/(/&/&||/& /_/)_&/_&\n";
        	file << "   &() &\\/&|()|/&\\/ '%\" & ()\n";
        	file << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
        	file << "&&   && & &| &| /& & % ()& /&&\n";
        	file << " ()&_---()&\\&\\|&&-&&--%---()~\n";
        	file << "     &&     \\| |\n";
        	file << "            \\| |\n";
        	file << "            \\| |\n";
        	file << "            \\| |\n";
        	file << "       , -=-~  .-^- _\n";
			file.close();
			
		} catch (std::ios_base::failure& e) {
			std::cout << "failed to create file because " << e.what() << "\n";
		}	
	} else {
		throw GradeTooHighException("Attempting to execute form");
	}
}
