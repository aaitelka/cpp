/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:25:08 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/06 18:41:40 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_Hpp
# define Weapon_Hpp

# include <iostream>
# include <string>

class Weapon {

private:
	std::string	type;

public:
	Weapon(std::string type);
	~Weapon(void);

	const std::string&	getType(void) const;
	void				setType(std::string type);
};

#endif
