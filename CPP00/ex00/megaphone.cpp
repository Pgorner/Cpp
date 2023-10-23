/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:26:47 by pgorner           #+#    #+#             */
/*   Updated: 2023/03/23 11:37:00 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
    int i = 1;
    int j = 0;

    if (argc < 2)   
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (i < argc)
        {
            j = 0;
            if (i != 1)
                std::putchar(' ');
            while(argv[i][j])
                std::putchar(std::toupper(argv[i][j++]));
            i++;
        }
    }
}
