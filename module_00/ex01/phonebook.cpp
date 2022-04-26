#include "phonebook.hpp"
#include "contact.hpp"

void	PhoneBook::AddContact(int i)
{
	std::string	info[5];

	std::cout << i << std::endl;
	std::cout << "1. First Name - ";
	getline(std::cin, info[0]);
	std::cout << "2. Last Name - ";
	getline(std::cin, info[1]);
	std::cout << "3. Nickname - ";
	getline(std::cin, info[2]);
	std::cout << "4. Phone Number - ";
	getline(std::cin, info[3]);
	std::cout << "5. Your deepest, darkest secret - ";
	getline(std::cin, info[4]);
	this->contact[i].FillInfo(info);
	return ;
}

std::string	PhoneBook::DisplayContact()
{
	std::string	info;
	int			id;

	for (int i = 0; i < id; i++)
	{
		info = contact[i].PrintContact(i);
		if (info.size() < 11)
		{
			for (int j = 0; j < info.size(); j++)
				std::cout << ' ';
		}
	}
}

void	PhoneBook::SearchContact(std::string contact, int index)
{
	int	i;

	i = 0;
	return ;
}
