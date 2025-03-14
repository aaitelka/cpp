/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 02:07:29 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/14 05:37:59 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() :	_name("Authorization Form"), _requiredGrade(10), _gradeToExecute(0),
				_isSigned(false)  {
}

Form::Form(const std::string& name, const int reqGrd, const int grdToExec, bool isSigned) :
	_name(name), _requiredGrade(reqGrd), _gradeToExecute(grdToExec), _isSigned(isSigned)  {
}

Form::Form(const Form& rhs)
	:	_name(rhs.getName()), _requiredGrade(rhs.getRequiredGrade()),
		_gradeToExecute(rhs.getGradeToExecute()), _isSigned(rhs.isSigned()) {
}

Form& Form::operator=(const Form& rhs) {
	if (this != &rhs) {
		_isSigned = rhs.isSigned();
	}
	return *this;
}

Form::~Form() {
}

const std::string Form::getName() const {
	return _name;
}

int Form::getRequiredGrade() const {
	return _requiredGrade;
}

int	Form::getGradeToExecute() const {
	return _gradeToExecute;
}

bool Form::isSigned() const {
	return _isSigned;
}

void Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= _requiredGrade) {
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
	os << "Required Grade: " << rhs.getRequiredGrade() << "\n";
    os << "Grade to Execute: " << rhs.getGradeToExecute() << "\n";
    os << "Is Signed: " << (rhs.isSigned() ? "Yes" : "No") << "\n";
	return os;
}
