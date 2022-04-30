#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type)
{

}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

std::string	Weapon::getType(void) const
{
	return (this->type);
}
