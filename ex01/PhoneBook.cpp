#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook Constructor called " << std::endl;
	index = 0;
	size = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook Destructor called" << std::endl;
}

bool getInfo(std::string prompt, std::string &output)
{
	std::cout << prompt;
	std::getline(std::cin, output);
	while (output.empty() == 1)
	{	
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (false);
		}
		std::cout << "Line Empty" << std::endl;
		std::cout << prompt;
		std::getline(std::cin, output);
	}
	return (true);
}
	
bool PhoneBook::addContact(void)
{
	std::string line;

	if (getInfo("What is the first name ? ", line) == false)
	 return (false);
	_contacts[index].setFirstName(line);
	if (getInfo("What is the last name ? ", line) == false)
		return (false);
	_contacts[index].setLastName(line);
	if (getInfo("What is the nickname ? ", line) == false)
		return (false);
	_contacts[index].setNickname(line);
	if (getInfo("What is the PhoneNumber ? ", line) == false)
		return (false);
	_contacts[index].setPhoneNumber(line);
	if (getInfo("What is the darkest secret ? ", line) == false)
		return (false);
	_contacts[index].setDarkestSecret(line);
	index++;
	index %= 8;
	if (size < 8)
		size++;
	return (true);
}

void displayColumn(std::string column)
{
	if (column.length() > 10)
	{
		for (int j = 0; j < 9; j++)
			std::cout << column[j];
		std::cout << ".|";
	}
	else
	{
		int k = 11 - column.length();		
		std::cout << column << std::setw(k) <<  "|";
	}
}

void PhoneBook::displayLine(int index)
{
	std::cout << "index =          " << index << std::endl;
	std::cout << "First Name =     " << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name =      " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname =       " << _contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number =   " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret = " << _contacts[index].getDarkestSecret() << std::endl;
}

void PhoneBook::displayContact(void)
{
	if (size == 0)
	{
		std::cout << "Phone Book is empty\n";
		return;
	}
	std::string line;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|index     |"
			  << "first name|"
			  << "last name |" 
			  << "nickname  |"
			  << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < size ; i++)
	{
		std::string column;
		std::cout << "|" << i % 8 << std::setw(10) << "|";
		column = _contacts[i % 8].getFirstName();
		displayColumn(column);
		column = _contacts[i % 8].getLastName();
		displayColumn(column);
		column = _contacts[i % 8].getNickname();
		displayColumn(column);
		std::cout << std::endl;
	    std::cout << "|___________________________________________|" << std::endl;
	}
	std::cout << "Which line do you want to display ? ";
	std::getline(std::cin, line);
	char* s;
	int num = std::strtol(line.c_str(), &s, 10); 
	if (line.size() != 1 || *s != 0 || num > 7 || num < 0 || num > size - 1)
		std::cout << "Invalid index\n";
	else
		displayLine(num);
}

void displayHelp(void)
{
	std::cout << "Valid commands are : \n";
	std::cout << "ADD for add a contact \n";
	std::cout << "SEARCH for display Phone Book and a contact \n";
	std::cout << "EXIT for exit the Phone book \n";
	std::cout << "HELP for display HELP \n";
}

