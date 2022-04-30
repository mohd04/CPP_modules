#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wc): _name(name), w_class(wc)
{
	std::cout << this->_name << " choose " << this->w_class.getType() << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " used " << this->w_class.getType() << std::endl;
}
