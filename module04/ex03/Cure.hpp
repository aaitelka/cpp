/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:58:33 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 18:43:32 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

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
