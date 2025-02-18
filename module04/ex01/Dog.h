/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:25:57 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 17:38:27 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal {

	private:
		Brain *_brain;
			
	public:
		Dog();
		Dog(const Dog& rhs);
		Dog& operator=(const Dog& rhs);
		~Dog();

		void makeSound() const;
		Brain *getBrain() const;
};

#endif
