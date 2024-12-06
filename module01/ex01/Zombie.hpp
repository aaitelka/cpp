/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 08:05:49 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/06 16:29:45 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_hpp
#define Zombie_hpp

#include <iostream>
#include <string>

class Zombie {
    
public:
    std::string name;
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce( void );
};

Zombie* zombieHorde(int N, std::string name);

#endif
