/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:49:46 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/24 14:11:47 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <string>
#define NUM 2

class Brain {
    public:
        Brain();
        ~Brain();
        Brain(const Brain & obj);
        Brain& operator=(const Brain& obj);
        
        std::string ideas[100];
    private:
};

#endif  // BRAIN_HPP_
