/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:33:12 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/19 03:15:25 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "AMateria.hpp" 
#include "ICharacter.hpp"

class Character : public ICharacter {

	private:
		std::string	_name;
		AMateria*	_slots[4];
		AMateria*	_unequiped[4];

	public:
		Character();
		Character(std::string const & name);
		Character(const Character& rhs);
		Character& operator=(const Character& rhs);
		virtual ~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
