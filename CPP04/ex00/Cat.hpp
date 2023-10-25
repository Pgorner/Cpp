/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:04:07 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/23 15:38:20 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		~Cat();
		Cat(const Cat & obj);
		Cat& operator=(const Cat& obj);
		void makeSound() const;
		
};

