/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:19:13 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/23 14:48:08 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
    setType("Cat");
    this->brain = new Brain();
    std::cout << getType() << " is alive" << std::endl;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << getType() << " is not so alive" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}

Cat::Cat(const Cat & obj) { *this = obj; }

Cat& Cat::operator=(const Cat& obj) {
    this->type = obj.getType();
    this->brain = new Brain(*(obj.getBrain()));
    return *this;
}

Brain	*Cat::getBrain( void ) const{
	return (this->brain);
}

Animal	&Cat::operator=( Animal const &obj )
{
	std::cout << "By magic the animal became to be a cat" << std::endl;
	this->type = obj.getType();
	this->brain = new Brain(*(obj.getBrain()));
	return *this;
}
