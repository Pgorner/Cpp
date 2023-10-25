/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:19:33 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/06 18:03:19 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon();
		void getType(std::string type);
		void setType(std::string type);
		const std::string& getType(void);
};