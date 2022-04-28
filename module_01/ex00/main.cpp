#include "./Zombie.hpp"

int main(void)
{
	Zombie	*unded = newZombie("fred");

	randomChump("pavan");
	unded->announce();
	delete unded;
	return (0);
}
