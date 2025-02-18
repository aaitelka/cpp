/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:23:06 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 18:06:35 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {

	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal& rhs);
		Animal& operator=(const Animal& rhs);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;
};

#endif
