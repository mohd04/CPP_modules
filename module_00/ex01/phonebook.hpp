#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

class PhoneBook
{
private:
	std::string		FirstName[8];
	std::string		LastName[8];
	std::string		Nickname[8];
	std::string		PhoneNumber[8];
	std::string		DarkestSecret[8];
public:
	void	AddContact(int i);
	void	PrintContact(int contacts);
	void	SearchContact(int count);
	void	ExitClear(int count);
};

#endif
