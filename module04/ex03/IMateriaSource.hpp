/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:09:20 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 18:44:28 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_HPP
#define IMATERIA_SOURCE_HPP

#include <string>
#include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}

		virtual AMateria *createMateria(const std::string& name) = 0;
		virtual void learnMateria(AMateria* m) = 0;
};

#endif
