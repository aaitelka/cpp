/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:23:06 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 04:12:21 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <string>

class WrongAnimal {

	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& rhs);
		WrongAnimal& operator=(const WrongAnimal& rhs);
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};

#endif
