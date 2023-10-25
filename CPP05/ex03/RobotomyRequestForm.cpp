/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:53:47 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/21 19:11:32 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other) {}
	return *this;
}

void	RobotomyRequestForm::executeConcrete() const {
	std::cout << "* LOUD DRILLING NOISES *" << std::endl << _target;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << " has been successfully robotimized!" << std::endl;
	else
		std::cout << " had some problems and its robotomy failed!" << std::endl;
}