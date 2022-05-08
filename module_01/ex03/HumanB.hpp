#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon*		w_class;
public:
	HumanB(std::string name);
	void	setWeapon(Weapon& wc);
	void	attack(void) const;
};

#endif
