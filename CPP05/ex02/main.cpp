/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:09:16 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/22 12:53:28 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{

	Bureaucrat	CEO("CEO", 1);
	Bureaucrat	Assistant("Assistant", 42);
	std::cout << CEO << std::endl;
	std::cout << Assistant << std::endl;

	try {
		{
			ShrubberyCreationForm form("kitchen");
	        
	        CEO.signForm(form);
	        CEO.executeForm(form);
		}
		{
			RobotomyRequestForm form("robot");
	        
	        CEO.signForm(form);
	        CEO.executeForm(form);
		}
		{
			PresidentialPardonForm form("merkel");
	        
	        CEO.signForm(form);
	        CEO.executeForm(form);
		}
		PresidentialPardonForm form("merkel");
		{
			
			CEO.executeForm(form);
		}
		{
			CEO.signForm(form);
			Assistant.executeForm(form);
		}
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}

