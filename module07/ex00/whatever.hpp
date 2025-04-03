/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 22:48:25 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/29 23:22:52 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVE_HPP
#define WHATEVER_HPP

template <typename T> void swap(T& a, T& b) {
	
	T t;

	t = a;
	a = b;
	b = t;
}

template <typename T> T min(const T& a, const T& b) {
	return (a < b) ? a : b;
}

template <typename T> T max(const T& a, const T& b) {
	return (a > b) ? a : b;
}

#endif
