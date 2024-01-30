#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_attackDamage = 30;
	this->_hitPoints = 100;
	std::cout << MAGENTA << "FragTrap " << _name << RESET << " has been created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setAttackDamage(30);
	this->setEnergyPoints(100);
	this->setHitPoints(100);
	std::cout << MAGENTA << "FragTrap " << _name << RESET << " has been created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << MAGENTA << "FragTrap " << _name << RESET << " has been destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << MAGENTA << "FragTrap " << _name << RESET << " says: Give me a high five !" << std::endl;
}

FragTrap::FragTrap(FragTrap const& toCopy)
{
	*this = toCopy;
}

FragTrap & FragTrap::operator=(FragTrap const& toCopy)
{
	if (this != &toCopy)
	{
		_name = toCopy._name;
		_attackDamage = toCopy._attackDamage;
		_hitPoints = toCopy._hitPoints;
		_energyPoints = toCopy._energyPoints;
	}
	return *this;
}
