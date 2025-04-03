/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 02:35:18 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/30 11:14:50 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main() {

	try {
		std::vector<int> v;
		
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);

		std::vector<int>::iterator it = ::easyfind(v, 3);
		std::cout << "Found value: " << *it << " at index "
				  << (it - v.begin()) << std::endl;

		it = ::easyfind(v, 10);
		std::cout << "Found value: " << *it << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << e.what() << std::endl;
    }
	return 0;
}