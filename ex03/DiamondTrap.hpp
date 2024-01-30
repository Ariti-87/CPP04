#ifndef DEF_DIAMONDTRAP
#define DEF_DIAMONDTRAP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

	DiamondTrap();
	DiamondTrap(std::string myName);
	~DiamondTrap();
	DiamondTrap(DiamondTrap const& toCopy);
	void whoAmI();
	void attack(const std::string& target);
	DiamondTrap &operator=(DiamondTrap const& toCopy);
	void print();

	private:

	std::string _name;
};


#endif
