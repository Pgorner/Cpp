/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:15:57 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/19 16:58:22 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Me ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Me not so ClapTrap no mo" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    this->hp = 100;
    this->ep = 5;
    this->ad = 1;
}

void ClapTrap::attack(const std::string& target){
	std::cout << "ClapTrap " << this->name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->ad;
	std::cout << " points of damage " << std::endl;
	this->ep--;
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << "ClapTrap " << this->name;
	std::cout << " got repaired to the amount of: ";
	std::cout << amount << std::endl;
	this->hp += amount;
	this->ep--;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->name;
	std::cout << " took damage for an amount of: ";
	std::cout << amount << std::endl;
	this->hp -= amount;
}