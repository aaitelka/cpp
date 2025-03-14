/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:45:58 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/14 02:06:01 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"

int main() {

  try {
    Bureaucrat b(1);
    std::cout << b << std::endl;
    b.upGrade();
    std::cout << b << std::endl;
  } catch (const std::invalid_argument &e) {
    std::cout << e.what() << "\n";
  }
  std::cout << "------------------------------------\n";
   try {
    Bureaucrat b(150);
    std::cout << b << std::endl;
    b.downGrade();
    std::cout << b << std::endl;
  } catch (const std::invalid_argument &e) {
    std::cout << e.what() << "\n";
  }
  std::cout << "------------------------------------\n";
   try {
    Bureaucrat b(150);
    std::cout << b << std::endl;
    b.upGrade();
    std::cout << b << std::endl;
  } catch (const std::invalid_argument &e) {
    std::cout << e.what() << "\n";
  }

}
