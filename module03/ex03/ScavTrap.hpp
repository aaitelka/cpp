/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:32:17 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 16:26:38 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	
	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& rhs);
		ScavTrap& operator=(const ScavTrap& rhs);
		~ScavTrap();

		void attack(const std::string& target);
        void guardGate();
};

#endif
