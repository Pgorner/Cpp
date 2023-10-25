/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:44:44 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/07 14:46:51 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

class Harl{
	private:
		void debug( void );
    	void info( void );
    	void warning( void );
    	void error( void );
	public:
		Harl();
		~Harl();
		void complain( std::string level );
};