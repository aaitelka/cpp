/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:09:20 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/12 23:37:19 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_H
#define IMATERIA_SOURCE_H

#include <string>
#include "AMateria.h"

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}

		virtual AMateria *createMateria(const std::string& name) = 0;
		virtual void learnMateria(AMateria* m) = 0;
};

#endif
