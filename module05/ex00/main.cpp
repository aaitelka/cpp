/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 22:45:58 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/12 06:15:11 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.cpp"

int main() {

  try {
    Bureaucrat b(153);
  } catch (const std::invalid_argument &e) {
    std::cout << "error " << e.what();
  }
}
