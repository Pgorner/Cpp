/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:19:13 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/22 11:19:26 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "An animal has appeared" << std::endl;
}

Animal::~Animal() {
    std::cout << this->type << " has died" << std::endl;
}

const std::string& Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "Animal makes noot noot" << std::endl;
}

void Animal::setType(const std::string& animalType) {
    this->type = animalType;
}

Animal& Animal::operator=(const Animal& obj) {
  (void)obj;
  return *this;
}

Animal::Animal(const Animal & obj) {
  *this = obj; 
}
