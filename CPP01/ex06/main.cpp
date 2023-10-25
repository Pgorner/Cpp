/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:33:41 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/26 17:27:10 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "stdio.h"


int main(int argc, char** argv)
{
    Harl harl = Harl();
    if (argc != 2)
    {
        harl.complain("EH");
        return 0;
    }
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i;
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == argv[1]) 
		   	break ;
	}
    switch (i)
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            harl.complain("EH");
            break;
    }
    return 0;
}