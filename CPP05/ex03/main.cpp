/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:09:16 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/26 13:22:52 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
    std::cout << "\033[34mConstructing\033[0m" << std::endl;
    Bureaucrat ceo("CEO", 1);
    Bureaucrat assistant("Assistant", 42);
    Intern intern;

    // Test creating forms using the Intern
    Form* shrubberyForm = intern.makeForm("shrubbery creation", "Garden");
    Form* robotomyForm = intern.makeForm("robotomy request", "Bender");
    Form* pardonForm = intern.makeForm("presidential pardon", "Merkel");

    std::cout << "\033[34mTesting\033[0m" << std::endl;
    std::cout << ceo << std::endl;
    std::cout << assistant << std::endl;

    try {
        shrubberyForm->beSigned(ceo);
        shrubberyForm->execute(ceo);

        robotomyForm->beSigned(ceo);
        robotomyForm->execute(ceo);

        pardonForm->beSigned(ceo);
        pardonForm->execute(ceo);
        
		pardonForm->beSigned(ceo);
        pardonForm->execute(ceo);
    }
    catch (std::exception& e) {
        std::cerr << "\033[31mError: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\033[34mDeconstructing\033[0m" << std::endl;

    return 0;
}