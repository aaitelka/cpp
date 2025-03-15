/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:45:58 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/15 18:12:13 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

  std::cout << "------------------------------------\n";
  try {
    Bureaucrat b(11);
    ShrubberyCreationForm s;
    // AForm f;
    // std::cout << b << std::endl;
    // b.upGrade();
    // std::cout << b << std::endl;
    // std::cout << "------------------------------------\n";
    // b.signForm(f);
    // std::cout << "------------------------------------\n";
    // std::cout << f << std::endl;
  } catch (const std::invalid_argument &e) {
    std::cout << e.what() << "\n";
  }

  // std::cout << "------------------------------------\n";
  // try {
  //   Bureaucrat b(12);
  //   AForm f;
  //   std::cout << b << std::endl;
  //   b.upGrade();
  //   std::cout << b << std::endl;
  //   std::cout << "------------------------------------\n";
  //   b.signForm(f);
  //   std::cout << "------------------------------------\n";
  //   std::cout << f << std::endl;
  // } catch (const std::invalid_argument &e) {
  //   std::cout << e.what() << "\n";
  // }

}
