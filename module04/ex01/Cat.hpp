/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:26:05 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 18:06:29 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain *_brain;

	public:
		Cat();
		Cat(const Cat& rhs);
		Cat& operator=(const Cat& rhs);
		~Cat();

		void makeSound() const;
		Brain *getBrain() const;
};

#endif
