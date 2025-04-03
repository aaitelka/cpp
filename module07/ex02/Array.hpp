/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 00:09:22 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/30 01:20:58 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T> class Array{

	private:
		T		*arr;
		int		_size;
		
	public:
		Array() : arr(new T[0]()), _size(0) {
		}

		Array(unsigned int n) : _size(n) {
			if (_size <= 0)
				throw std::invalid_argument("Size must be positive");
			arr = new T[n]();
		}

		Array(const Array& rhs) : arr(new T[rhs.size()]), _size(rhs.size()) {
			
		}

		Array& operator=(const Array& rhs) {
			if (this != &rhs) {
				delete[] arr;
				_size = rhs.size();
				arr = new T[_size]();
				for (size_t i = 0; i < size; ++i)
                	arr[i] = rhs.arr[i];
			}
			return *this;
		}

		~Array() {
			delete[] arr;
		}

		T& operator[](int index) {
			if (index < 0 || index >= _size)
				throw std::out_of_range("Index out of range");
			return arr[index];
		}

		const T& operator[](int index) const {
			if (index < 0 || index >= _size)
				throw std::out_of_range("Index out of range");
			return arr[index];
		}
		
		size_t size() const {
			return _size;
		}
};


#endif
