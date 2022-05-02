#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	Bulba("Bulbasaur");
	ClapTrap	Charm("Charmender");
	ClapTrap	Squir(Bulba);
	ClapTrap	Pika("");

	Pika = Charm;

	Bulba.attack("tree");
	Charm.attack("tree");
	Squir.attack("tree");
	Pika.attack("tree");

	Bulba.takeDamage(3);
	Bulba.beRepaired(1);

	return (0);
}
