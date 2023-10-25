/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:15:14 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/23 15:47:21 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_
#include "Animal.hpp"

class WrongAnimal{
 public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal & obj);
    WrongAnimal& operator=(const WrongAnimal& obj);

    const std::string& getType() const;
    void setType(const std::string& animalType);
    
    virtual void makeSound() const;

	protected:
		std::string type;
};

#endif  // WRONGANIMAL_HPP_
