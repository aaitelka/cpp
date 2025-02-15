/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:33:12 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/14 18:23:27 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "AMateria.h" 
#include "ICharacter.h"

class Character : public ICharacter {

	private:
		std::string	_name;
		int			_ssize;
		AMateria*	_slots[4];

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
