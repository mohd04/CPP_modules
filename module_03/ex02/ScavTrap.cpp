#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	this->health = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap " << this->name << "is live." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& cp): ClapTrap(cp.name)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = cp;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& cp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&cp != this)
	{
		this->name = cp.name;
		this->health = cp.health;
		this->EnergyPoints = cp.EnergyPoints;
		this->AttackDamage = cp.AttackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->health > 0 && this->EnergyPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "
				<< this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
	else
		std::cout << "ScavTrap is low on Hit point/Energypoints" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}
