/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:58:33 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/12 23:58:11 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.h"

class Cure : public AMateria {
	
	public:
		Cure();
		Cure(std::string const & type);
		Cure(const Cure& rhs);
		Cure& operator=(const Cure& rhs);
		~Cure();

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
