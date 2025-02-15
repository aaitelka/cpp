/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:26:05 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 04:10:01 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal {

	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat& rhs);
		Cat& operator=(const Cat& rhs);
		~Cat();
		
		std::string getType() const;	
		void makeSound() const;
};

#endif
