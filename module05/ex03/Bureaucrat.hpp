/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:31:18 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/18 12:18:25 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <ostream>
#include <exception>
#include <string>

class Bureaucrat {

	private:
		const std::string	_name;
		int					_grade;
	
	public:
		Bureaucrat();
		Bureaucrat(int grade);
		Bureaucrat(const Bureaucrat& rhs);
		Bureaucrat& operator=(const Bureaucrat& rhs);
		~Bureaucrat();

		const std::string getName() const;
		int getGrade() const;

		void upGrade();
		void downGrade();
		void signForm(AForm& form);

		void executeForm(AForm const & form);

		class GradeTooHighException : public std::invalid_argument {

			public:
				GradeTooHighException(const std::string& what);
				virtual ~GradeTooHighException() throw();
		};

		class GradeTooLowException : public std::invalid_argument {

			public:
				GradeTooLowException(const std::string& what);
				virtual ~GradeTooLowException() throw();
		};
};


std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif
