/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:57:01 by lvichi            #+#    #+#             */
/*   Updated: 2024/08/31 16:57:01 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: ./Sed_is_for_losers [file] [str_to_be_replaced] "
                  << "[str_to_replace_with]"
                  << std::endl;
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cerr << "Error: could not open file" << std::endl;
        return 1;
    }

    std::ofstream output_file((std::string(argv[1]) + ".replace").c_str());
    std::string str_to_be_replaced(argv[2]);
    std::string str_to_replace_with(argv[3]);

    std::string line;
    while (std::getline(file, line)) {
        size_t pos = 0;
        while ((pos = line.find(str_to_be_replaced, pos)) < line.length()) {
            line.erase(pos, str_to_be_replaced.length());
            line.insert(pos, str_to_replace_with);
            pos += str_to_replace_with.length();
        }
        output_file << line;
        if (!file.eof())
            output_file << std::endl;
    }

    file.close();
    output_file.close();

    return 0;
}

/*
echo kgabrielj gabrielgabrielgabriél >> test;
echo "   gabrielgabrielgabriél" >> test;
echo "gabrielgabrielgabriél" >> test;
valgrind ./Sed_is_for_losers test gabriel vanessa
 */