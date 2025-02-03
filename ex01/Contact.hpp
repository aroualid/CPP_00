#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include  <cctype>

class Contact{
    public:
    Contact();
	~Contact();
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickname(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;
	void setFirstName(std::string FirstName);
	void setLastName(std::string LastName);
	void setNickname(std::string Nickname);
	void setPhoneNumber(std::string PhoneNumber);
	void setDarkestSecret(std::string DarkestSecret);
	private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
};

#endif
