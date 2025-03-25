/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:35:09 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/25 17:17:24 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main()
{
	Data data;

	data.x = 1337;
	uintptr_t serialized = Serializer::serialize(&data);
	std::cout << serialized << std::endl;
	
	Data *desirialized = Serializer::deserialize(serialized);
	std::cout << desirialized->x << std::endl;

	return 0;
}
