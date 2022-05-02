#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap& cp);
	~ScavTrap();

	ScavTrap&	operator=(const ScavTrap& cp);

	void	attack(const std::string& target);
	void	guardGate();
};

#endif
