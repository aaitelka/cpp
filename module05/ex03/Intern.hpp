/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:08:28 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/19 18:21:43 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <string>

class Intern {

	AForm *createRobotomyRequest(const std::string& target);
	AForm *createShrubberyCreation(const std::string& target);
	AForm *createPresidentialPardon(const std::string& target);

	public:
		Intern();
		Intern(const Intern& rhs);
		Intern& operator=(const Intern& rhs);
		~Intern();

		AForm *makeForm(const std::string& formName, const std::string& target);
};

#endif
