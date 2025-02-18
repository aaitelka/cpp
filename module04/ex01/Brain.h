/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 03:56:01 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/18 17:41:43 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain {
	
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain& rhs);
		Brain& operator=(const Brain& rhs);
		~Brain();

		std::string getIdeaAt(int index) const;
};

#endif
