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
			std::cout << "Line empty (function display help)" << std::endl;
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
		else if (line == "EXIT")
			std::cout << "EXIT (function good exit)" << std::endl;
		else
			std::cout << "'" << line <<  "' is not a valid input (display help)" << std::endl;

	}
}
