/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:49:19 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/06 16:44:33 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(){
	std::cout << this->name << " is ded" << std::endl;
}

void Zombie::setName(std::string name){
	this->name = name;
}

void Zombie::announce(void) const{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}