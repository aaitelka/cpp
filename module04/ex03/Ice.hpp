/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:58:37 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 18:44:13 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	
	public:
		Ice();
		Ice(std::string const & type);
		Ice(const Ice& rhs);
		Ice& operator=(const Ice& rhs);
		~Ice();

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
