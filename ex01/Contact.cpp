#include "Contact.hpp"

Contact::Contact(void) : _first_name(""), _last_name(""), _nickname(""), _phone_number(""), _darkest_secret("")
{
	std::cout << "Contact Constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact Destructor called" << std::endl;
}

std::string Contact::getFirstName(void) const{
    return _first_name;
}

std::string Contact::getLastName(void) const{
    return _last_name;
}

std::string Contact::getNickname(void) const{
    return _nickname;
}

std::string Contact::getPhoneNumber(void) const{
    return _phone_number;
}

std::string Contact::getDarkestSecret(void) const{
    return _darkest_secret;
}

void Contact::setFirstName(std::string FirstName)
{
	_first_name = FirstName;
}


void Contact::setLastName(std::string LastName)
{
	_last_name = LastName;
}


void Contact::setNickname(std::string Nickname)
{
	_nickname = Nickname;
}

void Contact::setPhoneNumber(std::string PhoneNumber)
{
	_phone_number = PhoneNumber;
}

void Contact::setDarkestSecret(std::string DarkestSecret)
{
	_darkest_secret = DarkestSecret;
}

