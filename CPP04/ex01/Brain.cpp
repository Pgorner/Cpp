/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:49:52 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/23 14:47:33 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {}

Brain::~Brain() {}

Brain::Brain(const Brain & obj) 
{
  *this = obj;
}

Brain& Brain::operator=(const Brain& obj) {
  (void)obj;
  for (int i = 0; i < NUM; i++)
		this->ideas[i] = obj.ideas[i];
  return *this;
}
