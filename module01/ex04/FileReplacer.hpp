/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 08:28:42 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/07 14:44:37 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FileReplacer_Hpp
# define FileReplacer_Hpp

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class FileReplacer {

private:
    std::ifstream   infile;
    std::ofstream   outfile;
    std::string     filename;
    std::string     content;
    FileReplacer(std::string filename);
    void            readFile();
    void            findAndReplace(std::string s1, std::string s2);
    void            save();

public:
    ~FileReplacer();
    static void replace(std::string fname, std::string s1, std::string s2);
};

#endif
