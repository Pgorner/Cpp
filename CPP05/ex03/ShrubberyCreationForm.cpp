/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:53:36 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/22 12:55:41 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: Form("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) {
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other) {}
	return *this;
}

void	ShrubberyCreationForm::executeConcrete() const {
	std::fstream	fs;

	fs.open(_target + "_shrubbery", std::fstream::out | std::fstream::trunc);

	if (!fs.good())
		std::cerr << "Error while opening Shrubbery target file" << std::endl;

	fs <<
    "      '.,\n"
    "        'b      *\n"
    "         :$    #.\n"
    "          $:   #:\n"
    "          *#  @):\n"
    "          :@,@):   ,.**:'\n"
    ",         :@@*: ..**'\n"
    " '#o.    .:(@.@*\n"
    "    :bq,..:,@@*   ,*\n"
    "    ,p$q8,:@);  .p*\n"
    "   '    '@@Pp@@*\n"
    "         Y7lP.\n"
    "        :@):.\n"
    "       .:@:.\n"
    "     .::(@:.  \n";

	fs.close();
}