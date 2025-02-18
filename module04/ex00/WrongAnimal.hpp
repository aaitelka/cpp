/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:23:06 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 18:06:51 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {

	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& rhs);
		WrongAnimal& operator=(const WrongAnimal& rhs);
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};

#endif
