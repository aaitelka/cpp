/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:31:18 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/12 06:10:55 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <string>

class Bureaucrat {

	private:
		const std::string	_name;
		unsigned int		_grade;
	
	public:
		Bureaucrat(unsigned int grade);
		const std::string getName() const;
		unsigned int getGrade() const;
		
		void upGrade();
		void downGrade();

		class GradeTooHighException : std::exception {
			private:
				std::string _message;
			public:
				GradeTooHighException(const std::string& message);
				virtual ~GradeTooHighException() throw();

				virtual const char *what() const throw();
		};

		class GradeTooLowException : std::exception {
			private:
				std::string _message;
			public:
				GradeTooLowException(const std::string& message);
				virtual ~GradeTooLowException() throw();

				virtual const char *what() const throw();
		};
};

#endif