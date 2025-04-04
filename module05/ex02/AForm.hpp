/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 02:07:22 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/23 16:17:38 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <ostream>
#include <string>

class Bureaucrat;

class AForm {

	private:
		const std::string	_name;
		const int			_grdSign;
		const int			_grdExec;
		bool				_isSigned;
		std::string			_target;

	public:
		AForm();
		AForm(const std::string& name, int grdSign, int grdExec, const std::string& target);
		AForm(const AForm& rhs);
		AForm& operator=(const AForm& rhs);
		virtual ~AForm();

		const std::string& 	getName() const;
		int					getGradeSign() const;
		int					getGradeExec() const;
		std::string			getTarget() const;
		bool				isSigned() const;
		void				signForm(bool sign);

		void beSigned(Bureaucrat& bureaucrat);

		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::out_of_range {

			public:
				GradeTooHighException(const std::string& what);
				virtual ~GradeTooHighException() throw();
		};

		class GradeTooLowException : public std::out_of_range {

			public:
				GradeTooLowException(const std::string& what);
				virtual ~GradeTooLowException() throw();
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& rhs);

#endif
