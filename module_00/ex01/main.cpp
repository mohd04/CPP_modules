#include "./phonebook.hpp"
#include "./contact.hpp"

int main(void)
{
	std::string	cmd;
	int			search;
	int			i = 0;
	int			count = 0;
	PhoneBook	dir;

	cmd = "";
	search = -1;
	while (cmd != "EXIT")
	{
		std::cout << "Please enter a command below :" << std::endl << "> ";
		getline(std::cin, cmd);
		std::cout << cmd << std::endl;
		if (std::cin.eof())
			return (0);
		if (cmd == "ADD")
		{
			dir.AddContact(count);
			if (i < 8)
				i++;
			count++;
			if (count > 8)
				count = (count - 1) % 8;
		}
		else if (cmd == "SEARCH")
		{
			dir.DisplayContact(i, count);
			std::cout << "Choose the ID of the contact that you would like to view - ";
			std::cin >> search;
			dir.SearchContact(i, search);
			std::cin.ignore(80, '\n');
		}
		else if (cmd != "EXIT")
		{
			std::cout << "Command entered is invalid. Please enter a valid command - "
				<< "\"ADD\", \"SEARCH\" OR \"EXIT\"." << std::endl;
		}
	}
	return (0);
}
