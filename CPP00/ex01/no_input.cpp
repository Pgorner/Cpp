/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_input.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:26:47 by pgorner           #+#    #+#             */
/*   Updated: 2023/07/20 14:23:29 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yello_pages.hpp"

std::string getRandomLineFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return "";
    }

    std::vector<std::string> lines;
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, lines.size() - 1);
    int randomIndex = dis(gen);

    file.close();

    return lines[randomIndex];
}

void    not_input()
{   
    unsigned long k;
    unsigned long i;
    k = 0;
    i = 0;
    std::cout << "NO INPUT\n";
    std::string str=getRandomLineFromFile("memes.txt");
    while (k < str.size()) 
    {
        if (str[k] == '\\' && str[k+1] == 'n'){
            k += 2;
            i++;
            std::cout << '\n' << std::flush;
        }
        std::cout << str[k++] << std::flush;
        std::this_thread::sleep_for(std::chrono::microseconds(500));
    }
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "PRESS ENTER TO CONTINUE" << std::endl << std::flush;
    k = 0;
    clearit(i+1);
}
void    goodbye()
{   
    unsigned long k;
    clearit(16);
    k = 0;
    std::string str="                                           \n       _____ _____ _____ ____  _____ __ __ _____ \n      |   __|     |     |    }| __  |  |  |   __|\n      |  |  |  |  |  |  |  |  | __ -|_   _|   __|\n      |_____|_____|_____|____/|_____| |_| |_____|\n                                           ";
    while (k < str.size()) 
    {
        std::cout << str[k++] << std::flush;
        std::this_thread::sleep_for(std::chrono::microseconds(10000));
    }
    clearit(4);
}