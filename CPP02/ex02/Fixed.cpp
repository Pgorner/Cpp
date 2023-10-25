/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:19:27 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/19 15:24:29 by pgorner          ###   ########.fr       */
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

Fixed const& Fixed::operator=(const Fixed &copy){
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


float Fixed::toFloat(void) const{
	return ((float)this->fixnum / (float)(1 << eight));
}

int Fixed::toInt(void) const{
	return (this->fixnum >> eight);
}

std::ostream &operator<<(std::ostream &out, const Fixed &ref){
	out << ref.toFloat();
	return (out);
}

bool Fixed::operator==(const Fixed& other) const {
	return this->fixnum == other.fixnum;
}

bool Fixed::operator!=(const Fixed& other) const {
	return this->fixnum != other.fixnum;
}

bool Fixed::operator<(const Fixed& other) const {
	return this->fixnum < other.fixnum;
}

bool Fixed::operator>(const Fixed& other) const {
	return this->fixnum > other.fixnum;
}

bool Fixed::operator<=(const Fixed& other) const {
	return this->fixnum <= other.fixnum;
}

bool Fixed::operator>=(const Fixed& other) const {
	return this->fixnum >= other.fixnum;
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed result;
	result.fixnum = this->fixnum + other.fixnum;
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed result;
	result.fixnum = this->fixnum - other.fixnum;
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.fixnum = (this->fixnum * other.fixnum) >> eight;
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed result;
	result.fixnum = (this->fixnum << eight) / other.fixnum;
	return result;
}

Fixed& Fixed::operator++() {
	++fixnum;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed old(*this);
	++fixnum;
	return old;
}

Fixed& Fixed::operator--() {
	--fixnum;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed old(*this);
	--fixnum;
	return old;
}

Fixed &Fixed::min(Fixed &ref1, Fixed &ref2)
{
	if (ref1 < ref2)
		return (ref1);
	return (ref2);
}

const Fixed &Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1 < ref2)
		return (ref1);
	return (ref2);
}

Fixed &Fixed::max(Fixed &ref1, Fixed &ref2)
{
	if (ref1 > ref2)
		return (ref1);
	return (ref2);
}

const Fixed &Fixed::max(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1 > ref2)
		return (ref1);
	return (ref2);
}