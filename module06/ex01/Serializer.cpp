/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:31:13 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/25 17:03:49 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
}

Serializer::Serializer(const Serializer& rhs) {
	(void)rhs;
}

Serializer& Serializer::operator=(const Serializer& rhs) {
	(void)rhs;
	return *this;
}

Serializer::~Serializer() {
}

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
