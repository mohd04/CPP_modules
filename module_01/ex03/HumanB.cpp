#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), w_class(NULL)
{
	std::cout << this->_name << " is empty handed" << std::endl;
}

void	HumanB::setWeapon(Weapon& wc)
{
	this->w_class = &wc;
	std::cout << this->_name << " has " << this->w_class->getType() << std::endl;
}

void	HumanB::attack(void) const
{
	if (this->w_class)
		std::cout << this->_name << " uses " << this->w_class->getType() << std::endl;
	else
		std::cout << this->_name << " doesn't have a weapon." << std::endl;
}
