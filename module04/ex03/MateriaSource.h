/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:11:57 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/14 19:21:03 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
#define MATERIA_SOURCE_H

#include "IMateriaSource.h"
#include "AMateria.h"

class MateriaSource : public IMateriaSource {

	private:
		int			_ssize;
		AMateria*	_slots[4];
		
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& rhs);
		MateriaSource& operator=(const MateriaSource& rhs);
		~MateriaSource();

		AMateria *createMateria(std::string const & name);
		void learnMateria(AMateria *m);
};

#endif
