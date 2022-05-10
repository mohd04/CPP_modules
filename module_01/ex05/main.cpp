#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "Harl is here.." << std::endl;
	std::cout << "DEBUG\t: ";
	harl.complain("DEBUG");
	std::cout << "INFO\t: ";
	harl.complain("INFO");
	std::cout << "WARNING\t: ";
	harl.complain("WARNING");
	std::cout << "ERROR\t: ";
	harl.complain("ERROR");
	std::cout << "ERROR\t: ";
	harl.complain("eh");
	return (0);
}
