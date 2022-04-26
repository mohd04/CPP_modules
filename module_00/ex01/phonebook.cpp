#include "./phonebook.hpp"
#include "./contact.hpp"

void	PhoneBook::AddContact(int i)
{
	std::string	info[5];

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
}

void	alignment(std::string str)
{
	int	i = -1;

	if (str.size() < 10)
	{
		for (int j = 0; j < (10 - str.size()); j++)
			std::cout << ' ';
		std::cout << str;
	}
	else
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << '.';
	}
}

void	PhoneBook::DisplayContact(int id, int count)
{
	for (int i = 0; i < id; i++)
	{
		std::cout << i << '.';
		alignment(contact[i].PrintContact(FIRSTNAME));
		std::cout << std::endl;
	}
}

void	PhoneBook::SearchContact(int index, int pos)
{
	if (pos >= 0 && pos <= index)
	{
		for (int j = 0; j < 5; j++)
		{
			alignment(contact[pos].PrintContact(j));
			std::cout << '|';
		}
		std::cout << std::endl;
	}
	else
		std::cout << "Contact not found." << std::endl;
}
