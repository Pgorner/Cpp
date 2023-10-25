/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:31:52 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/26 13:10:15 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern() {
  std::cout << "An Intern arrived late\n";
}

Intern::~Intern() {
  std::cout << "An Intern left early\n";
}

Intern::Intern(const Intern & obj) {
  *this = obj; 
  std::cout << "An Intern put itself in the copy machine\n";
}

Intern& Intern::operator=(const Intern& obj) {
  (void)obj;
  return *this;
  std::cout << "An Intern told his twin to come to work as well\n";
}

static Form	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

// Public Methods
Form	*Intern::makeForm(std::string new_form, std::string target)
{
	Form *(*forms[])(std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
	std::string form_names[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
		if (new_form == form_names[i])
    {
      std::cout << "Intern made " << new_form << " after procrastinating too long\n";
			return (forms[i](target));
    }
  std::cout << "Intern didnt do " << new_form << " since he slept\n";
	return (NULL);
}