#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "./phonebook.hpp"

typedef enum e_info
{
	FIRSTNAME,
	LASTNAME,
	NICKNAME,
	PHONENUMBER,
	DARKESTSECRET
}			t_info;

class	Contacts
{
private:
	std::string		FirstName;
	std::string		LastName;
	std::string		Nickname;
	std::string		PhoneNumber;
	std::string		DarkestSecret;
public:
	std::string	PrintContact(int contacts);
	void		FillInfo(std::string *info);
};

#endif
