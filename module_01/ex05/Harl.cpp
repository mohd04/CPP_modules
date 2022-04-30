#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	void	(Harl::*lvl)();

	lvl = &Harl::wrong;
	(!level.compare("DEBUG") && (lvl = &Harl::debug));
	(!level.compare("INFO") && (lvl = &Harl::info));
	(!level.compare("WRNING") && (lvl = &Harl::warning));
	(!level.compare("ERROR") && (lvl = &Harl::error));
	(this->*lvl)();
}

void	Harl::wrong(void)
{
	std::cout << "Wrong argument." << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
	<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. "
	<< "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
	<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
	<< "I've been coming for years whereas you started working here last month."
	<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}
