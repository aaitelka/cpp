/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 23:26:53 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/30 00:04:31 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void print(char& i) {

	std::cout << i;
}

int main() {

	char c[] = {'a', 'a', 'i', 't', 'e', 'l', 'k', 'a'};
	
	::iter(c, sizeof(c) / sizeof(c[0]), print);

	return 0;
}