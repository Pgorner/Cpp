/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:15:18 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/22 11:25:09 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal"){
  std::cout << "A mutation has appeared" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << this->type << " has succumbed to its wrongful lifeform" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & obj) {
  *this = obj; 
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
  (void)obj;
  return *this;
}

const std::string& WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::makeSound() const {
    std::cout << "Wrong Animal makes hurr durr" << std::endl;
}

void WrongAnimal::setType(const std::string& WronganimalType) {
    this->type = WronganimalType;
}