/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:09:14 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/23 16:26:55 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137, "home") {
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("shrubbery creation", 145, 137, target) {
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

	AForm::execute(executor);

	try {
		const std::string filename = getTarget() + "_shrubbery";
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

}
