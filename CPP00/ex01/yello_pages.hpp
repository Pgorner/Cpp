/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yello_pages.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:10:57 by pgorner           #+#    #+#             */
/*   Updated: 2023/07/20 14:21:29 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GELBE_SEITEN_H
# define GELBE_SEITEN_H

#include <random>
#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
#include <fstream>

class Contacts
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:	
	bool taken;
	static Contacts    add();
	static Contacts    show();
	std::string        getFirstName(void) const;
	std::string        getLastName(void) const;
	std::string        getNickName(void) const;
	std::string        getPhone(void) const;
	std::string        getDarkest(void) const;
	std::string        getInput(std::string str) const;
};

class Phonebook {
private:
public:
    Contacts contact[8];
	Contacts	search();
};

void    not_input();
void    goodbye();
void    clearit(int i);

#endif
