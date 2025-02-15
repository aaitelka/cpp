/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:25:57 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 04:14:20 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {

	public:
		Dog();
		Dog(const Dog& rhs);
		Dog& operator=(const Dog& rhs);
		~Dog();

		std::string getType() const;
		void makeSound() const;
};

#endif
