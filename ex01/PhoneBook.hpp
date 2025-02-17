#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include "Contact.hpp"

void displayHelp(void);

class PhoneBook{
    public:
	PhoneBook();
	~PhoneBook();
	bool addContact(void);
	void displayContact(void);
	void displayLine(int index);	
	private:
    Contact _contacts[8]; 
	int index;
	int size;
};

#endif
