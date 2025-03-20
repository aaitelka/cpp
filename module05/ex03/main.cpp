/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:45:58 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/20 12:34:36 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {

  std::cout << "------------------------------------\n";
  try {
    Bureaucrat b(1);

    {
      Intern someRandomIntern;
      AForm* rrf;
      rrf = someRandomIntern.makeForm("robotomy request", "Bendder");
      if (!rrf)
        return (1);
      b.signForm(*rrf);
      rrf->execute(b);
      delete rrf;
    }
  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }

}
