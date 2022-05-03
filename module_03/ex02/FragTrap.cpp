#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	this->health = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << "FragTrap " << this->name << " is live." << std::endl;
}

FragTrap::FragTrap(FragTrap& cp): ClapTrap(cp.name)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = cp;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& cp)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (&cp != this)
	{
		this->name = cp.name;
		this->health = cp.health;
		this->EnergyPoints = cp.EnergyPoints;
		this->AttackDamage = cp.AttackDamage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " is giving away High fives!!!!!!" << std::endl;
}
