/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:15:21 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/09 14:13:16 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    setType("Wrong Cat");
    std::cout << getType() << " is hardly alive" << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << getType() << " is definitely not so alive" << std::endl;
}

WrongCat::WrongCat(const WrongCat & obj) { *this = obj; }

WrongCat& WrongCat::operator=(const WrongCat& obj) {
  (void)obj;
  return *this;
}
