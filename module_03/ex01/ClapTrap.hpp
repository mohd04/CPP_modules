#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string	name;
	int			health;
	int			EnergyPoints;
	int			AttackDamage;
public:
	ClapTrap(std::string _name);
	ClapTrap(ClapTrap& cp);
	~ClapTrap();

	ClapTrap&	operator=(const ClapTrap& cp);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
