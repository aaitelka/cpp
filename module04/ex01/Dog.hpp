/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:25:57 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 18:10:16 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

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
