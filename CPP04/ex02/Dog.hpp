/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:04:09 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/24 15:54:27 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal {
    private:
		  Brain *brain;
    public:
        Dog();
        Dog(const Dog & obj);
        ~Dog();
        Dog& operator=(const Dog& obj);
        Animal	&operator=( Animal const &obj );
        virtual void makeSound() const;
        virtual Brain	*getBrain( void ) const;
};