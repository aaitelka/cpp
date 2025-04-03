/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 12:06:05 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/30 18:25:06 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <iterator>

class Span {

	private:
		std::set<int>	_set;
		unsigned int	_maxSize;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span& rhs);
		Span& operator=(const Span& rhs);
		~Span();

		void addNumber(int number);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		unsigned int getMaxSize() const;
		
		template <typename InputIterator> void fill(InputIterator start, InputIterator end) {
			for (InputIterator it = start; it != end; ++it) {
				addNumber(*it);
			}
		}
		
		
};

#endif
