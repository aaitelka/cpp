/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:41:09 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/06 23:15:24 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_Hpp
# define Harl_Hpp

# include <string>

enum Levels {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    UNKNOWN
};

class Harl {

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void complain(std::string level);

};

#endif
