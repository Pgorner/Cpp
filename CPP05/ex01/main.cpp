/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:09:16 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/26 13:40:09 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main(void) {
    Bureaucrat CEO("CEO", 1);
    Bureaucrat Assistant("Assistant", 42);
    std::cout << std::endl;
    std::cout << CEO << std::endl;
    std::cout << std::endl;
    std::cout << Assistant << std::endl;
    std::cout << std::endl;

    try {
        Form form("form1", 12, 45);

        CEO.signForm(form);
    } catch (std::exception& e) {
        std::cout << "\033[1;31mError couldnt sign form: " << e.what() << "\033[0m" << std::endl;
    }
    std::cout << std::endl;

    try {
        Form form("form2", 30, 31);

        Assistant.signForm(form);
    } catch (std::exception& e) {
        std::cout << "\033[1;31mError couldnt sign form: " << e.what() << "\033[0m" << std::endl;
    }
    std::cout << std::endl;

    try {
        Form form("form3", 1, 2);

        CEO.signForm(form);
    } catch (std::exception& e) {
        std::cout << "\033[1;31mError couldnt sign form: " << e.what() << "\033[0m" << std::endl;
    }
    std::cout << std::endl;

    try {
        Form form("form4", 20, 40);

        Assistant.signForm(form);
    } catch (std::exception& e) {
        std::cout << "\033[1;31mError couldnt sign form: " << e.what() << "\033[0m" << std::endl;
    }
    std::cout << std::endl;
}