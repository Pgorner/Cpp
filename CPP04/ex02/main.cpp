/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 10:36:26 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/23 18:03:51 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <string>
#include <iostream>


int main(){
	int i = -1;
	Animal *animals[NUM];
	Brain *brain[NUM];
	
	while (++i < NUM)
	{
		if (i%2 == 0)
			animals[i] = new Cat;
		else	
			animals[i] = new Dog;
		std::cout << animals[i]->getType() << std::endl;
	}
	brain[0] = animals[0]->getBrain();
	brain[0]->ideas[0] = "Thought1";
	brain[0]->ideas[1] = "Thought2";
	brain[0]->ideas[2] = "Thought3";
	brain[0]->ideas[3] = "Thought4";

	std::cout << animals[0]->getType() << ": " << animals[0]->getBrain()->ideas[0] << std::endl;
	i = -1;
	while (++i < NUM)
		delete animals[i];
}