#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cctype>

int main(void) 
{
	PhoneBook a;
	while (1)
	{
		std::string line;
		std::cout << "Type your commmand : ";	
		std::getline(std::cin, line);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (1);	
		}
		if (line.empty() == 1)
		{
			std::cout << "Line empty" << std::endl;
			displayHelp();
		}
		else if (line == "ADD")
		{
			if (a.addContact() == false)
				return (1);
		}
		else if (line == "SEARCH")
		{
			a.displayContact();
			//std::cout << "SEARCH (function display search menu)" << std::endl;
		}
		else if (line == "HELP")
			displayHelp();
		else if (line == "EXIT")
		{
			std::cout << "EXIT" << std::endl;
			return (0);
		}
		else
		{
			std::cout << "' " << line <<  " ', is not a valid input" << std::endl;
			displayHelp();
		}

	}
}

