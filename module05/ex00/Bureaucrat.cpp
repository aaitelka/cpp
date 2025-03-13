/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:38:11 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/12 06:12:52 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(unsigned int grade) : _name("Security") {
	
	if (grade < 1) {
		throw GradeTooHighException("Bureaucrat exception: Grade too hight");
	} else if (grade > 150) {
		throw GradeTooLowException("Bureaucrat exception: Grade too low");
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& message) {
	_message = message;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return _message.c_str();
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
	
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& message) {
	_message = message;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return _message.c_str();
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
	
}
