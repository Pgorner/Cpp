/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:15:23 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/23 18:06:06 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat  : public WrongAnimal{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat & obj);
        WrongCat& operator=(const WrongCat& obj);
};

#endif  // WRONGCAT_HPP_
