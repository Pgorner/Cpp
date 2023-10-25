/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 09:27:12 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/20 11:09:43 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
    	ScavTrap();
		ScavTrap(const std::string& name);
    	~ScavTrap();
    	void attack(const std::string& target);
    	void guardGate();
};
