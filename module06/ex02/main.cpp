/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:16:20 by aaitelka          #+#    #+#             */
/*   Updated: 2025/03/25 20:13:49 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Identifier.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {

	Identifier id;
	
	Base *b = id.generate();
	
	Identifier::identify(b);
	
	delete b;
	
	return 0;
}
