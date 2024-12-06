/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:40:24 by aaitelka          #+#    #+#             */
/*   Updated: 2024/10/06 20:18:54 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int ac, char *av[]) {

    Harl    harl;

    if (ac != 2)
    {
        std::cout << "Error: should run it as folow ";
        std::cout <<  "./harlFilter [LEVEL]" << std::endl;
        return (1);
    }
    harl.complain(av[1]);
    return (0);    
}