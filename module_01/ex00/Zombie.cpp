#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string _name) : name(_name)
{
}

Zombie::~Zombie()
{
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
