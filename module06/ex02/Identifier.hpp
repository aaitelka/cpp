/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifier.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:18:59 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/25 20:09:35 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFIER_HPP
#define IDENTIFIER_HPP

#include "Base.hpp"

class Identifier {

    private:
        Base *getA();
        Base *getB();
        Base *getC();

    public:
        Identifier();
        Identifier(const Identifier& rhs);
        Identifier& operator=(const Identifier& rhs);
        ~Identifier();

        Base *generate(void);
        static void identify(Base* p);
        static void identify(Base& p);
};

#endif
