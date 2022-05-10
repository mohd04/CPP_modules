#include "Zombie.hpp"

int main(void)
{
	Zombie	*horde = zombieHorde(5, "jeff");
	horde[1].setName("dummy");
	horde[3].setName("omar");
	horde[4].setName("pavan");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
