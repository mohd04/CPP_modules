#include "phonebook.hpp"

void	PhoneBook::AddContact(int i)
{
	if (i > 8)
		i = (i - 1) % 8;

	std::cout << "1. First Name - ";
	getline(std::cin, FirstName[i]);
	std::cout << "2. Last Name - ";
	getline(std::cin, LastName[i]);
	std::cout << "3. Nickname - ";
	getline(std::cin, Nickname[i]);
	std::cout << "4. Phone Number - ";
	getline(std::cin, PhoneNumber[i]);
	std::cout << "5. Your deepest, darkest secret";
	getline(std::cin, DarkestSecret[i]);
}

void	PhoneBook::PrintContact(int contacts)
{
	int	i;

	i = -1;
	std::cout << "Choose a contact to search from - " << std::endl;
	while (++i < contacts)
		std::cout << i << ". " << FirstName[i] << std::endl;
}
