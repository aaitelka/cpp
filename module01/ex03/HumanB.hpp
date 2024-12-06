/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:15:19 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/06 18:41:55 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Human_B_Hpp
# define Human_B_Hpp

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {

private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon& wepon);
	void attack();

};

#endif
