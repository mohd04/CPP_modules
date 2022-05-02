#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name): name(_name)
{
	std::cout << "Constructor called" << std::endl;
	this->health = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap& cp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& cp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->name = cp.name;
	this->health = cp.health;
	this->EnergyPoints = cp.EnergyPoints;
	this->AttackDamage = cp.AttackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->health > 0 && this->EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
				<< this->AttackDamage << " points of damage!" << std::endl;
		this->health--;
	}
	else
		std::cout << "ClapTrap is low on Hit point/Energypoints" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	damage = amount;
	while (amount && (this->health >= 0) && (this->EnergyPoints >= 0))
	{
		this->health--;
		this->EnergyPoints--;
		amount--;
	}
	std::cout << "ClapTrap " << this->name << " takes " << damage << " of damage "
			<< "remaining Hit points is " << this->health << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int	repair = amount;
	while (amount && (this->health <= 10))
	{
		this->health++;
		amount--;
	}
	std::cout << "ClapTrap " << this->name << " repaired itself by " << repair << " to have its Hit points increased to "
		<< this->health << std::endl;
}
