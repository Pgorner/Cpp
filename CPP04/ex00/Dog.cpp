/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:52:31 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/22 11:16:54 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    setType("Dog");
    std::cout << getType() << " is alive" << std::endl;
}

Dog::~Dog() {
    std::cout << getType() << " is not so alive" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof wof" << std::endl;
}

Dog::Dog(const Dog & obj) { *this = obj; }

Dog& Dog::operator=(const Dog& obj) {
  (void)obj;
  return *this;
}
