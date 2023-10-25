/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:15:57 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/20 11:09:49 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main() {
    ClapTrap clapTrap("doot");
    clapTrap.attack("Enemy");
    clapTrap.takeDamage(20);
    clapTrap.beRepaired(2);

    ScavTrap scavTrap("ScavBot");

    std::cout << "ScavTrap Name: " << scavTrap.getName() << std::endl;
    std::cout << "ScavTrap HP: " << scavTrap.getHp() << std::endl;
    std::cout << "ScavTrap EP: " << scavTrap.getEp() << std::endl;
    std::cout << "ScavTrap AD: " << scavTrap.getAd() << std::endl;
    std::cout << "ClapTrap Name: " << clapTrap.getName() << std::endl;
    std::cout << "ClapTrap HP: " << clapTrap.getHp() << std::endl;
    std::cout << "ClapTrap EP: " << clapTrap.getEp() << std::endl;
    std::cout << "ClapTrap AD: " << clapTrap.getAd() << std::endl;

    scavTrap.attack("Enemy1");
    scavTrap.guardGate();

}
