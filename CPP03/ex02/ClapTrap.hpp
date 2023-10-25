/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:15:57 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/20 10:57:01 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class ClapTrap{
	private:
		std::string name;
		int	hp;
		int ep;
		int ad;
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		virtual ~ClapTrap();
		
		std::string getName() const;
		void setName(const std::string& name);

		int getHp() const;
		void setHp(int hp);
		int getEp() const;
		void setEp(int ep);
		int getAd() const;
		void setAd(int ad);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
