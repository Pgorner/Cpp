/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:19:27 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/19 13:41:16 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixnum(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy){
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixnum = copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixnum);
}

void Fixed::setRawBits(int const raw){
	this->fixnum = raw;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixnum = value << eight;
}

Fixed::Fixed(float const value){
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(value * (1 << this->eight)));
}

std::ostream &operator<<(std::ostream &out, const Fixed &ref){
	out << ref.toFloat();
	return (out);
}

float Fixed::toFloat(void) const{
	return ((float)this->fixnum / (float)(1 << eight));
}

int Fixed::toInt(void) const{
	return (this->fixnum >> eight);
}
