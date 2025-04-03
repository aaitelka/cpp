/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 02:28:19 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/30 11:29:48 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T> typename T::iterator easyfind(T& t, int o) {
	
	typename T::iterator it = t.begin();

	for (; it != t.end(); ++it) {
		if (*it == o) return it;
	}
	throw std::out_of_range("No occurrence found in the container");
}

#endif
