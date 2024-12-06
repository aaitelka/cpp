/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 08:28:42 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/06 22:58:56 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef StringReplacer_Hpp
# define StringReplacer_Hpp

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class StringReplacer {

private:
    std::ifstream   infile;
    std::ofstream   outfile;
    std::string     filename;
    std::string     content;
    StringReplacer(std::string filename);
    void            readFile();
    void            findAndReplace(std::string s1, std::string s2);
    void            save();

public:
    ~StringReplacer();
    static void replace(std::string fname, std::string s1, std::string s2);
};

#endif
