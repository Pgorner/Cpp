/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:06:31 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/06 16:51:06 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	int num = 6;
	Zombie* horde = zombieHorde(num, "Zombie");
	for (int i = 0; i < num; i++){
		horde[i].announce();
	}
	delete[] horde;
}