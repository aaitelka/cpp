/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 00:08:58 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/30 01:28:03 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {

	 try {
		Array<int> a(-1);

		a[0] = 10;
		a[-1] = 100;

		std::cout << a[-1] << std::endl;
	 } catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	 }

	return 0;
}