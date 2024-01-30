#ifndef DEF_SCAVTRAP
#define DEF_SCAVTRAP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:

	ScavTrap();
	ScavTrap(std::string myName);
	~ScavTrap();
	ScavTrap(ScavTrap const& toCopy);
	virtual void attack(const std::string& target);
	void guardGate();
	ScavTrap& operator=(ScavTrap const& toCopy);

	private:
};

#endif
