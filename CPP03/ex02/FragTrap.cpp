/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:40:53 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/20 12:44:28 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "Me FragTrap" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    setHp(100);
    setEp(100);
    setAd(30);
    std::cout << "FragTrap " << getName() << " has arrived!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << getName() << " is no more!" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    std::cout << "FragTrap " << getName();
    std::cout << " attacks " << target;
    std::cout << ", causing " << getAd();
    std::cout << " points of damage." << std::endl;
    setEp(getEp() - 1);
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << getName() << " is trying to positively high five you" << std::endl;
}
