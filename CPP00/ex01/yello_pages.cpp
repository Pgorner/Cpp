

#include "yello_pages.hpp"

std::string Contacts::getFirstName() const
{
return this->first_name;
}
std::string Contacts::getLastName() const
{
return this->last_name;
}
std::string Contacts::getNickName() const
{
return this->nickname;
}
std::string Contacts::getPhone() const
{
return this->phone_number;
}
std::string Contacts::getDarkest() const
{
return this->darkest_secret;
}

void	clearit(int i)
{
	for (int k = 0; k <= i; k++)
		std::cout << "\033[A\033[2K";
}

void	loading()
{
	unsigned long k;
	k = 0;
	std::string str="~~~~~~~~~~~~~~~~~~~~~~~~~~~~ loading ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	while (k < str.size()) 
	{
		std::cout << str[k++] << std::flush;
		std::this_thread::sleep_for(std::chrono::microseconds(40000));;
	}
	clearit(0);
}

void	intro()
{
	unsigned long k;
	k = 0;
	std::string str="-------------------------------------------------------------------\n|                          Welcome to                             |\n";
	while (k < str.size()) 
	{
		std::cout << str[k++] << std::flush;
		std::this_thread::sleep_for(std::chrono::microseconds(3000));;
	}
	k = 0;
	str="|                                                                 |\n|          _____     _ _          _____     _ _                   |\n|         |   __|___| | |_ ___   |   __|___|_| |_ ___ ___         |\n|         |  |  | -_| | . | -_|  |__   | -_| |  _| -_|   |        |\n|         |_____|___|_|___|___|  |_____|___|_|_| |___|_|_|        |\n|                                                                 |\n";
	while (k < str.size()) 
	{
		std::cout << str[k++] << std::flush;
		std::this_thread::sleep_for(std::chrono::microseconds(4000));;
	}
	k = 0;
	str="|                    Your local phonebook                         |\n|                      Your options are:                          |\n|       ----- ADD -------                                         |\n|       For adding another contact                                |\n|       ---- SEARCH -----                                         |\n|       For searching for a contact                               |\n|       ----- EXIT ------                                         |\n|       Self explanatory                                          |\n-------------------------------------------------------------------\n";
	while (k < str.size()) 
	{
		std::cout << str[k++] << std::flush;
		std::this_thread::sleep_for(std::chrono::microseconds(4000));
	}
}

Contacts	Contacts::add()
{
	Contacts new_contact;
	std::string input;
	new_contact.taken = 1;
	new_contact.first_name = new_contact.getInput("First name");
	new_contact.nickname = new_contact.getInput("Nickname");
	new_contact.last_name = new_contact.getInput("Last name");
	new_contact.phone_number = new_contact.getInput("Phone number");
	new_contact.darkest_secret = new_contact.getInput("Darkest secret");
	clearit(4);
	return(new_contact);
}
std::string print(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	if (str.length() == 0)
		return(str = "/");
	return str;
}

void show(Contacts contacts[8]) {
	std::string input = "";
	std::cout << "Enter index number and press ENTER or just ENTER to exit\n";
	
	while (true)
	{
		if (std::cin.eof())
			std::cin.clear();
		getline(std::cin, input);

		if (input.empty())
			break;

		if (input == "EXIT")
			break;
		else if (input.size() > 1 || !(input[0] >= '0' && input[0] <= '8'))
		{
			clearit(0);
			std::cout << "Input must be a valid number between 1 & 8 or EXIT" << std::endl << std::flush;
			std::cout << "PRESS ENTER TO CONTINUE\n";
			clearit(0);
		}
		else
		{
			int i = input[0] - 49;
			if (contacts[i].taken == 1)
			{
				clearit(0);
				std::cout << "First name     :" << contacts[i].getFirstName() << std::endl << std::flush;
				std::cout << "Nickname       :" << contacts[i].getNickName() << std::endl << std::flush;
				std::cout << "Last name      :" << contacts[i].getLastName() << std::endl << std::flush;
				std::cout << "Phone number   :" << contacts[i].getPhone() << std::endl << std::flush;
				std::cout << "Darkest secret :" << contacts[i].getDarkest() << std::endl << std::flush;
				std::this_thread::sleep_for(std::chrono::seconds(4));
				clearit(4);
			}
			else
			{
				clearit(0);
				std::cout << "Contact is empty" << std::endl;
				std::this_thread::sleep_for(std::chrono::seconds(1));
				clearit(0);
			}
		}
	}
	clearit(13);
}




void	display(Contacts contacts[8])
{
	for(int i = 0; i <=66; i++)
		std::cout << "-" << std::flush;
	std::cout << std::endl;
	std::cout << "|" << std::setw(10) << "index" << std::flush;
	std::cout << "|" << std::setw(10) << print("first name") << std::flush;
	std::cout << "|" << std::setw(10) << print("nickname") << std::flush;
	std::cout << "|" << std::setw(10) << print("last name") << std::flush;
	std::cout << "|" << std::setw(10) << print("phone number") << std::flush;
	std::cout << "|" << std::setw(10) << print("darkest secret") << std::flush;
	std::cout << "|" << std::endl;
	for(int i = 0; i <=66; i++)
		std::cout << "-" << std::flush;
	std::cout << std::endl;
	for(int i = 0; i <=7; i++){
		std::cout << "|" << std::setw(10) << i+1 << std::flush;
		std::cout << "|" << std::setw(10) << print(contacts[i].getFirstName()) << std::flush; 
		std::cout << "|" << std::setw(10) << print(contacts[i].getNickName()) << std::flush;
		std::cout << "|" << std::setw(10) << print(contacts[i].getLastName()) << std::flush;
		std::cout << "|" << std::setw(10) << print(contacts[i].getPhone()) << std::flush;
		std::cout << "|" << std::setw(10) << print(contacts[i].getDarkest()) << std::flush;
		std::cout << "|" << std::endl;}
	for(int i = 0; i <=66; i++)
		std::cout << "-" << std::flush;
	std::cout << std::endl;
	show(contacts);
}


int main (void)
{
	Phonebook phonebook;
	Contacts contact[8];
	std::string input;
	int count = 0;
	int ogcount = 0;
	clearit(100);
	loading();
	intro();

	std::cin.clear();
	while (input != "EXIT")
	{
		if (std::cin.eof()){
			std::cin.clear();
			continue;
		}
		getline(std::cin, input);
		if (input == "ADD"){
			clearit(0);
			loading();
			if (count == 8){
				std::cout << "You are overwriting the Contact of:\n";
				std::cout << contact[ogcount].getFirstName();
				std::cout << "\nDo you want to continue?(Y/N)\n";
				while (true)
				{
					getline(std::cin, input);
					if (input == "Y"){
						clearit(3);
						contact[ogcount++] = Contacts::add();
						if (ogcount == 9)
							ogcount = 0;
						break;
					}
					else if (input == "N")
					{
						clearit(3);
						std::cout << "Alright then\n";
						std::this_thread::sleep_for(std::chrono::seconds(2));
						clearit(0);
						break;
					}
					else
					{
						clearit(0);
						std::cout << "INVALID INPUT\n";
						std::this_thread::sleep_for(std::chrono::seconds(2));
						clearit(0);
					}
				}
			}
			else
				contact[count++] = Contacts::add();
		}
		else if (input == "SEARCH" && count > 0){
			clearit(0);
			loading();
			display(contact);
		}
		else if (input == "SEARCH"){
			clearit(0);
			std::cout << "no friends no luck\n";
			std::this_thread::sleep_for(std::chrono::seconds(2));
			clearit(0);
		}
		else if (input != "EXIT"){
			clearit(0);
			not_input();
		}
	}
	clearit(13);
	goodbye();
}
