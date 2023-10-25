/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:19:30 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/04 12:59:22 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed{
	public:
		Fixed(const Fixed &copy);
		Fixed();
		Fixed &operator=(const Fixed &copy);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int fixnum;
		static const int eight = 8;
};