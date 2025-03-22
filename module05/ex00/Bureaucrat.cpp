/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:38:11 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/22 19:28:22 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat() : _name("Security"), _grade(150) {
}

Bureaucrat::Bureaucrat(int grade) : _name("Security") {

	if (grade < 1) {
		throw GradeTooHighException("Bureaucrat : Grade too hight");
	} else if (grade > 150) {
		throw GradeTooLowException("Bureaucrat : Grade too low");
	}
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs)
	: _name(rhs.getName()), _grade(rhs.getGrade()) {
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
	if (this != &rhs) {
		this->_grade = rhs.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {	
}

int Bureaucrat::getGrade() const {
	return _grade;
}

const std::string& Bureaucrat::getName() const {
	return _name;
}

void Bureaucrat::upGrade() {
	if (--(_grade) < 1) {
		throw GradeTooHighException("Bureaucrat: Grade too hight");
	}
}

void Bureaucrat::downGrade() {
	if (++(_grade) > 150) {
		throw GradeTooLowException("Bureaucrat: Grade too low");
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& what)
	: std::invalid_argument(what) {
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {	
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& what)
	: std::invalid_argument(what) {
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {	
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs) {
	os << rhs.getName() << ", bureaucrat grade "<< rhs.getGrade() << ".";
	return os;
}
