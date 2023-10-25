/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:05:50 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/20 10:55:45 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Me ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    setHp(100);
    setEp(50);
    setAd(20);
    std::cout << "ScavTrap " << getName() << " has arrived!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << getName() << " is no more!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    std::cout << "ScavTrap " << getName();
    std::cout << " attacks " << target;
    std::cout << ", causing " << getAd();
    std::cout << " points of damage." << std::endl;
    setEp(getEp() - 1);
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << getName() << " is guarding the gate!" << std::endl;
}
