//#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cctype>

int main(void) 
{
	while (1)
	{

		std::string line;
		std::cout << "What is your name? ";	
		std::getline(std::cin, line);
		if (std::cin.eof())
            return (1);	
		if (line.empty() == 1)
			std::cout << "Line empty (function display help)" << std::endl;
		else if (line == "ADD")
			std::cout << "ADD (function chek and add)" << std::endl;
		else if (line == "SEARCH")
			std::cout << "SEARCH (function display search menu)" << std::endl;
		else if (line == "EXIT")
			std::cout << "EXIT (function good exit)" << std::endl;
		else
			std::cout << "'" << line <<  "' is not a valid input (display help)" << std::endl;

	}
}
