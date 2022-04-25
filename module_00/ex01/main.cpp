#include "./phonebook.hpp"

int main(void)
{
	std::string	cmd;
	int			i = 0;
	PhoneBook	dir;

	cmd = "";
	while (cmd != "EXIT")
	{
		std::cout << "Please enter a command below :" << std::endl << ">";
		getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			i++;
			dir.AddContact(i - 1);
		}
		else if (cmd == "SEARCH")
		{
			dir.PrintContact(i);
		}
		else if (cmd != "EXIT")
		{
			std::cout << "Command entered is invalid. Please enter a valid command - "
				<< "\"ADD\", \"SEARCH\" OR \"EXIT\"." << std::endl;
		}
	}
	return (0);
}
