/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:46:45 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/12 23:43:00 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include "ICharacter.h"

class AMateria {

	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& rhs);
		AMateria& operator=(const AMateria& rhs);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
