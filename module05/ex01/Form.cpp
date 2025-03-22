/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 02:07:29 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/22 19:58:49 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : _name("From"), _grdSign(10), _grdExec(0), _isSigned(false) {
}

Form::Form(const Form& rhs) : _name(rhs.getName()), _grdSign(rhs.getGradeExec()),
		_grdExec(rhs.getGradeExec()), _isSigned(rhs.isSigned()) {
}

Form& Form::operator=(const Form& rhs) {
	if (this != &rhs) {
		_isSigned = rhs.isSigned();
	}
	return *this;
}

Form::~Form() {
}

const std::string& Form::getName() const {
	return _name;
}

int Form::getGradeSign() const {
	return _grdSign;
}

int	Form::getGradeExec() const {
	return _grdExec;
}

bool Form::isSigned() const {
	return _isSigned;
}

void Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= _grdSign) {
		_isSigned = true;
	} else {
		throw GradeTooLowException("Form: Grade too low");
	}
}

Form::GradeTooHighException::GradeTooHighException(const std::string& what)
	: std::out_of_range(what) {
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
}

Form::GradeTooLowException::GradeTooLowException(const std::string& what)
	: std::out_of_range(what) {
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
}

std::ostream& operator<<(std::ostream& os, const Form& rhs) {
	os << "Form Name: " << rhs.getName() << "\n";
	os << "Required Grade: " << rhs.getGradeSign() << "\n";
    os << "Grade to Execute: " << rhs.getGradeExec() << "\n";
    os << "Is Signed: " << (rhs.isSigned() ? "Yes" : "No") << "\n";
	return os;
}
