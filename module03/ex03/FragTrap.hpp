/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:55:33 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/03 05:44:30 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	
	public:
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& rhs);
		FragTrap& operator=(const FragTrap& rhs);
		~FragTrap();
		
		void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif
