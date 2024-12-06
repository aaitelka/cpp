/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 08:02:34 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/06 16:57:44 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
   
   randomChump("3sso");
   
   Zombie *zeko = newZombie("Zeko");
   zeko->announce();
   delete zeko;

   return 0;
}
