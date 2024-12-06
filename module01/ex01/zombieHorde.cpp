/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 08:05:53 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/06 18:14:41 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombies[i].name = name;
    return &zombies[0];
}
