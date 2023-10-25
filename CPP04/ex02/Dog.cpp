/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:52:31 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/23 14:48:11 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
    setType("Dog");
    this->brain = new Brain();
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
    this->type = obj.getType();
    this->brain = new Brain(*(obj.getBrain()));
    return *this;
}

Brain	*Dog::getBrain( void ) const{
	return (this->brain);
}

Animal	&Dog::operator=( Animal const &obj )
{
	std::cout << "By magic the animal became to be a dog" << std::endl;
	this->type = obj.getType();
	this->brain = new Brain(*(obj.getBrain()));
	return *this;
}