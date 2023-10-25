/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:19:13 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/22 11:17:32 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    setType("Cat");
    std::cout << getType() << " is alive" << std::endl;
}

Cat::~Cat() {
    std::cout << getType() << " is not so alive" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}

Cat::Cat(const Cat & obj) { *this = obj; }

Cat& Cat::operator=(const Cat& obj) {
  (void)obj;
  return *this;
}
