#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(const std::string& name);
	FragTrap(FragTrap& cp);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& cp);

	void	highFivesGuys(void);
};

#endif
