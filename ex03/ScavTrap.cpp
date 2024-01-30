#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_energyPoints = 50;
	std::cout << CYAN << "ScavTrap " << _name << RESET << " has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setAttackDamage(20);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
	std::cout << CYAN << "ScavTrap " << _name << RESET << " has been created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << CYAN << "ScavTrap " << _name << RESET << " has been destroyed" << std::endl;
}

void ScavTrap::attack(std::string const& target)
{
		if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << CYAN << "ScavTrap " << _name << RESET << " attacks " << target << " , causing ";
		std::cout << YELLOW << _attackDamage << " points of damage!" << RESET << std::endl;
	}
	else
	{
		if (_energyPoints <= 0)
			std::cout << CYAN << "ScavTrap " << _name << RESET << " has no energy for attacks" << std::endl;
		else
			std::cout << RED << "ScavTrap " << _name << " can't attack" << RESET << std::endl;
	}
}


void ScavTrap::guardGate()
{
	std::cout << CYAN << "ScavTrap " << _name << RESET << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& toCopy)
{
	*this = toCopy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const& toCopy)
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
