/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:10:24 by pgorner           #+#    #+#             */
/*   Updated: 2023/05/29 11:17:45 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yello_pages.hpp"


std::string Contacts::getInput(std::string str) const 
{
	std::string input;
	std::cout << std::left << std::setfill(' ');
    std::cout << std::setw(15) << str << ":";
	while (!input[0])
        getline(std::cin, input);
	return(input);
}