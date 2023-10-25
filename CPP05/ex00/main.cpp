/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:09:16 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/25 18:17:37 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main(void) {
  try {
    Bureaucrat bureaucrat("Pingu", 130);
    std::cout << bureaucrat << std::endl;
	bureaucrat.upgrade(101);
    std::cout << bureaucrat << std::endl;
	bureaucrat.upgrade(100);
    std::cout << bureaucrat << std::endl;
	bureaucrat.downgrade(31);
    std::cout << bureaucrat << std::endl;
  } catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
  }
}
