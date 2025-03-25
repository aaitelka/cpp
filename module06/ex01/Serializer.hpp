/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:30:38 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/25 17:19:17 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>

struct Data {
	int x;
};

class Serializer {

    private:
        Serializer();
        Serializer(const Serializer& rhs);
        Serializer& operator=(const Serializer& rhs);
        ~Serializer();
    
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif
