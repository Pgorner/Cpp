/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:05:06 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/26 17:27:42 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug( void ){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std:: endl<< std:: endl;
}

void Harl::info( void ){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std:: endl<< std:: endl;
}
void Harl::warning( void ){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std:: endl<< std:: endl;
}
void Harl::error( void ){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std:: endl << std:: endl;
}
void Harl::eh( void ){
	std::cout << "[ Probably complaining about insignificant problems ]" << std:: endl;
}

void Harl::complain(std::string level){
	const std::string	levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "EH"};
	void (Harl::*complain[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::eh};
	int	i = -1;
	while (++i < 5)
	{
		if (level == levels[i])
			(this->*complain[i])();
	}
}