/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 12:53:07 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/30 18:21:12 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include "Span.hpp"

int main() {

	Span sp = Span(15837301);

	std::vector<int> v;

	for (int i = 0; i < 15837301; ++i) {
		v.push_back(i);
	}

	sp.fill(v.begin(), v.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
