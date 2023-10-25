/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:15:57 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/19 16:44:00 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int main(void){
	ClapTrap ClapTrap("doot");
	ClapTrap.attack("Enemi");
	ClapTrap.takeDamage(20);
	ClapTrap.beRepaired(2);
}