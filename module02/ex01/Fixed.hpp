/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:54:12 by aaitelka          #+#    #+#             */
/*   Updated: 2025/01/08 19:04:19 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int					_fixed;
	static const int	_fract = 8;
public:

	Fixed();
	Fixed(const int val);
	Fixed(const float val);

	Fixed(const Fixed& rhs);
	Fixed& operator=(const Fixed& rhs);

	~Fixed();

	float toFloat() const;
	int toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
