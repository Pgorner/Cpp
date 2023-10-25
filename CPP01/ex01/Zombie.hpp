/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:49:45 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/06 17:27:39 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <random>
#include <string>
#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void announce(void) const;
        void setName(std::string name);
};
    Zombie* zombieHorde(int N, std::string name);
#endif
