/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 02:07:22 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/14 05:23:59 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

// #include "Bureaucrat.hpp"
#include <ostream>
#include <string>

class Bureaucrat;

class Form {

	private:
		const std::string	_name;
		const int			_requiredGrade;
		const int			_gradeToExecute;
		bool				_isSigned;

	public:
		Form();
		Form(const std::string& name, const int reqGrd, const int grdToExec, bool isSigned);
		Form(const Form& rhs);
		Form& operator=(const Form& rhs);
		~Form();

		const	std::string getName() const;
		int		getRequiredGrade() const;
		int		getGradeToExecute() const;
		bool	isSigned() const;

		void beSigned(Bureaucrat& bureaucrat);

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

std::ostream& operator<<(std::ostream& os, const Form& rhs);

#endif
