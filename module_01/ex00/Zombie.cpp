#include "Zombie.hpp"

Zombie::Zombie(std::string _name) : name(_name)
{
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
