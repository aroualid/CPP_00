#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
    public:
	PhoneBook();
	~PhoneBook();
    Contact SetContact(std::string FirstName, std::string LastName, std::string Nickname, std::string PhoneNumber, std::string DarkestSecret);
	private:
    Contact _contacts[8]; 
	int index = 0;
};

#endif
