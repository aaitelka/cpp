/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 08:33:56 by aaitelka          #+#    #+#             */
/*   Updated: 2024/12/06 22:58:04 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplacer.hpp"

void StringReplacer::findAndReplace(std::string s1, std::string s2) {
    size_t          pos;
    size_t          s1Len;

    s1Len = s1.length();
    if (!s1Len || s1 == s2)
        return ;
    pos = content.find(s1, 0);
    while (pos != std::string::npos) {
        content.erase(pos, s1Len);
        content.insert(pos, s2);
        pos = content.find(s1, pos + s2.length());
    }
}

StringReplacer::StringReplacer(std::string filename) {
        this->filename = filename;
}

void StringReplacer::readFile() {
    std::stringstream   buffer;

    infile.open(filename);
    if (!infile.is_open()) {
		std::cout << "Error: opening file : " << filename << std::endl;
		exit(EXIT_FAILURE);
	}
    buffer << infile.rdbuf();
    content = buffer.str();
}

void StringReplacer::replace(std::string fname, std::string s1, std::string s2) {
    StringReplacer replacer(fname);

    replacer.readFile();
    replacer.findAndReplace(s1, s2);
    replacer.save();
}

void StringReplacer::save() {
    std::string     replacedFilename;

    replacedFilename = filename.append(".replace");
    outfile.open(replacedFilename);
     if (!outfile.is_open()) {
		std::cout << "Error: opening file : " << filename << std::endl;
		exit(EXIT_FAILURE);
	}
    outfile << content;
}

StringReplacer::~StringReplacer() {
    infile.close();
    outfile.close();
}
