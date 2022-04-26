#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "./contact.hpp"

class PhoneBook
{
private:
	Contacts	contact[8];
public:
	void		AddContact(int i);
	std::string	DisplayContact();
	void		SearchContact(std::string contact, int index);
	void		ExitClear(int count);
};

#endif
