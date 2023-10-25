/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:07:16 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/14 14:11:35 by pgorner          ###   ########.fr       */
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
		void eh( void );
	public:
		Harl();
		~Harl();
		void complain( std::string level );
};