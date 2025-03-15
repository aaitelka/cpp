/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 02:07:29 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/15 18:23:55 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm() :	_name("Unknown"), _grdSign(0), _grdExec(0),
					_isSigned(false)  {
}

AForm::AForm(const std::string& name, const int grdSign, const int grdExec) :
	_name(name), _grdSign(grdSign), _grdExec(grdExec), _isSigned(false) {
}

AForm::AForm(const AForm& rhs)
	:	_name(rhs.getName()), _grdSign(rhs.getRequiredGrade()),
		_grdExec(rhs.getGradeToExecute()), _isSigned(rhs.isSigned()) {
}

AForm& AForm::operator=(const AForm& rhs) {
	if (this != &rhs) {
		_isSigned = rhs.isSigned();
	}
	return *this;
}

AForm::~AForm() {
}

const std::string AForm::getName() const {
	return _name;
}

int AForm::getRequiredGrade() const {
	return _grdSign;
}

int	AForm::getGradeToExecute() const {
	return _grdExec;
}

bool AForm::isSigned() const {
	return _isSigned;
}

void AForm::signForm(bool sign) {
	_isSigned = sign;
}

void AForm::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= _grdSign) {
		_isSigned = true;
	} else {
		throw GradeTooLowException(_name + "_Form: Grade too low");
	}
}

AForm::GradeTooHighException::GradeTooHighException(const std::string& what)
	: std::out_of_range(what) {
}

AForm::GradeTooHighException::~GradeTooHighException() throw() {
}

AForm::GradeTooLowException::GradeTooLowException(const std::string& what)
	: std::out_of_range(what) {
}

AForm::GradeTooLowException::~GradeTooLowException() throw() {
}

std::ostream& operator<<(std::ostream& os, const AForm& rhs) {
	os << "AForm Name: " << rhs.getName() << "\n";
	os << "Required Grade: " << rhs.getRequiredGrade() << "\n";
    os << "Grade to Execute: " << rhs.getGradeToExecute() << "\n";
    os << "Is Signed: " << (rhs.isSigned() ? "Yes" : "No") << "\n";
	return os;
}
