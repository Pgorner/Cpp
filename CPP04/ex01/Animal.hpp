/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:05:48 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/23 18:02:31 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {
public:
    Animal();
    Animal(const Animal& src);
    virtual ~Animal();

    Animal& operator=(const Animal& obj);

    const std::string& getType() const;
    void setType(const std::string& animalType);
    
    virtual void makeSound() const;
    // virtual Brain *getSmart() const;
    virtual Brain *getBrain( void ) const = 0; 
protected:
    std::string type;
};