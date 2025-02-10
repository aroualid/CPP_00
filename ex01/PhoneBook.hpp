#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
    public:
	PhoneBook();
	~PhoneBook();
	bool addContact(void);
	void displayContact(void);
	//bool showContact(int index);
	private:
    Contact _contacts[8]; 
	int index; 
};

#endif
