/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 02:07:29 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/23 16:24:43 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm() : _name("Form"), _grdSign(0), _grdExec(0), _isSigned(false),
	_target("none") {
}

AForm::AForm(const std::string& name, int grdSign, int grdExec, const std::string& target)
	: _name(name), _grdSign(grdSign), _grdExec(grdExec), _isSigned(false), _target(target) {
}

AForm::AForm(const AForm& rhs) : _name(rhs.getName()), _grdSign(rhs.getGradeSign()),
		_grdExec(rhs.getGradeExec()), _isSigned(rhs.isSigned()), _target(rhs.getTarget()) {
}

AForm& AForm::operator=(const AForm& rhs) {
	if (this != &rhs) {
		_isSigned = rhs.isSigned();
		_target = rhs.getTarget();
	}
	return *this;
}

AForm::~AForm() {
}

const std::string& AForm::getName() const {
	return _name;
}

int AForm::getGradeSign() const {
	return _grdSign;
}

int	AForm::getGradeExec() const {
	return _grdExec;
}

bool AForm::isSigned() const {
	return _isSigned;
}

std::string AForm::getTarget() const {
	return _target;
}

void AForm::signForm(bool sign) {
	_isSigned = sign;
}

void AForm::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= _grdSign) {
		_isSigned = true;
	} else {
		throw GradeTooLowException(_name + " Form: Grade too low");
	}
}

void AForm::execute(Bureaucrat const & executor) const {
	if (_isSigned == false || executor.getGrade() > _grdExec)
		throw GradeTooHighException("Attempting to execute form");
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
	os << "Required Grade: " << rhs.getGradeSign() << "\n";
    os << "Grade to Execute: " << rhs.getGradeExec() << "\n";
    os << "Is Signed: " << (rhs.isSigned() ? "Yes" : "No") << "\n";
	return os;
}
