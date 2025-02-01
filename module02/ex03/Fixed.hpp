/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:54:12 by aaitelka          #+#    #+#             */
/*   Updated: 2025/02/01 02:31:02 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_FIXED_HPP
#define EX03_FIXED_HPP

#include <iostream>

class Fixed {
private:
	int					_fixed;  
	static const int	_fract;

public:
	Fixed();
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed& rhs);
	Fixed& operator=(const Fixed& rhs);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int const raw);

	float toFloat() const;
    int toInt() const;
	
	bool operator>(const Fixed& rhs) const;
	bool operator<(const Fixed& rhs) const;
	bool operator>=(const Fixed& rhs) const;
	bool operator<=(const Fixed& rhs) const;
	bool operator==(const Fixed& rhs) const;
	bool operator!=(const Fixed& rhs) const;

	Fixed operator+(const Fixed& rhs) const;
	Fixed operator-(const Fixed& rhs) const;
	Fixed operator*(const Fixed& rhs) const;
	Fixed operator/(const Fixed& rhs) const;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
