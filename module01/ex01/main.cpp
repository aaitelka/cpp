/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 08:05:31 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/06 18:21:13 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

	int N = 4;
	Zombie *zombies = zombieHorde(N, "Zeko");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;

	return 0;
}
