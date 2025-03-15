/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 02:07:22 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/15 18:23:39 by aaitelka         ###   ########.fr       */
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

	public:
		AForm();
		AForm(const std::string& name, const int grdSign, const int grdExec);
		AForm(const AForm& rhs);
		AForm& operator=(const AForm& rhs);
		~AForm();

		const	std::string getName() const;
		int		getRequiredGrade() const;
		int		getGradeToExecute() const;
		bool	isSigned() const;
		void	signForm(bool sign);

		virtual void beSigned(Bureaucrat& bureaucrat) = 0;

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
