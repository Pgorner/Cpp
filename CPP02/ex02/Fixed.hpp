/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:19:30 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/04 12:59:09 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();

		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator*=(const Fixed& other) const;
		
		Fixed const &operator=(const Fixed &copy);
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		static Fixed &min(Fixed &ref1, Fixed &ref2);
		static const Fixed &min(const Fixed &ref1, const Fixed &ref2);
		static Fixed &max(Fixed &ref1, Fixed &ref2);
		static const Fixed &max(const Fixed &ref1, const Fixed &ref2);
	private:
		int fixnum;
		static const int eight = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &ref);