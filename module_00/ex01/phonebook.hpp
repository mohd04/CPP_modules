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
	void		DisplayContact(int id, int count);
	void		SearchContact(int index, int count);
};

#endif
