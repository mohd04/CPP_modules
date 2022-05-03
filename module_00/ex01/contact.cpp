#include "phonebook.hpp"
#include "contact.hpp"

void	Contacts::FillInfo(std::string *info)
{
	this->FirstName = info[0];
	this->LastName = info[1];
	this->Nickname = info[2];
	this->PhoneNumber = info[3];
	this->DarkestSecret = info[4];
}

std::string	Contacts::PrintContact(int info)
{
	switch (info)
	{
		case 0:
			return (this->FirstName);
		case 1:
			return (this->LastName);
		case 2:
			return (this->Nickname);
		case 3:
			return (this->PhoneNumber);
		case 4:
			return (this->DarkestSecret);
		default:
			return ("Wrong arg");
	}
}
