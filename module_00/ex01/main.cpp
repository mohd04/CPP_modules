#include "./phonebook.hpp"

int main(void)
{
	std::string	cmd;
	std::string	search;
	int			i = 0;
	PhoneBook	dir;

	cmd = "";
	search = "";
	while (cmd != "EXIT")
	{
		std::cout << "Please enter a command below :" << std::endl << ">";
		getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			dir.AddContact(i);
			i++;
			if (i > 3)
				i = (i - 1) % 3;
		}
		else if (cmd == "SEARCH")
		{
			dir.PrintContact(i);
			getline(std::cin, search);
			dir.SearchContact(search, i);
		}
		else if (cmd != "EXIT")
		{
			std::cout << "Command entered is invalid. Please enter a valid command - "
				<< "\"ADD\", \"SEARCH\" OR \"EXIT\"." << std::endl;
		}
	}
	return (0);
}
