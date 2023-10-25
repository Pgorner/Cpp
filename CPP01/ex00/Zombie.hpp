/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:49:45 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/26 16:15:33 by pgorner          ###   ########.fr       */
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
        ~Zombie();
        Zombie(std::string name);
        void announce(void) const;
};

        Zombie* newZombie(std::string name);
        void    randomChump(std::string name);

#endif
