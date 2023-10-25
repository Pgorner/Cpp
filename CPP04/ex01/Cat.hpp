/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:04:07 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/23 18:02:58 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat & obj);
		Cat& operator=(const Cat& obj);
		Animal&  operator=( Animal const &obj );
		virtual void makeSound() const;
		// virtual Brain *getSmart() const;
		Brain	*getBrain( void ) const;
};

