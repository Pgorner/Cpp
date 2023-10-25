/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:35:56 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/26 16:26:01 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){
	std::cout << this->name << " is alive" << std::endl;
}

HumanB::~HumanB(){
	std::cout << this->name << " is ded" << std::endl;
}

void HumanB::attack(void){
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}