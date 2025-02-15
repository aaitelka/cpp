/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:26:05 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/05 04:12:32 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal {

	public:
		WrongCat();
		WrongCat(const WrongCat& rhs);
		WrongCat& operator=(const WrongCat& rhs);
		~WrongCat();
		
		std::string getType() const;	
		void makeSound() const;
};

#endif
