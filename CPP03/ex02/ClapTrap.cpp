/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:15:57 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/20 12:32:09 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::~ClapTrap(){
	std::cout << "Me not so " << this->name << " no mo" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) {
	std::cout << "Me " << name << std::endl;
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

std::string ClapTrap::getName() const {
	return name;
}

void ClapTrap::setName(const std::string& name) {
	this->name = name;
}

int ClapTrap::getHp() const {
	return hp;
}

void ClapTrap::setHp(int hp) {
	this->hp = hp;
}

int ClapTrap::getEp() const {
	return ep;
}

void ClapTrap::setEp(int ep) {
	this->ep = ep;
}

int ClapTrap::getAd() const {
	return ad;
}

void ClapTrap::setAd(int ad) {
	this->ad = ad;
}
