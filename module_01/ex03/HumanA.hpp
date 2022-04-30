#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon&		w_class;
public:
	HumanA(std::string name, Weapon& wc);
	void	attack(void) const;
};

#endif
