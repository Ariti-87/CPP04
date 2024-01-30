#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Object " << BLUE << "DiamondTrap " << RESET << "has been created" << std::endl;

}

DiamondTrap::DiamondTrap(std::string myName) : ClapTrap(myName + "_clap_name")
{
	this->_name = myName;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << BLUE << "DiamondTrap " << _name << RESET << " has been created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << BLUE << "DiamondTrap " << _name << RESET << " has been destroyed" << std::endl;
}


DiamondTrap::DiamondTrap(DiamondTrap const& toCopy)
{
	*this = toCopy;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const& toCopy)
{
	if (this != &toCopy)
	{
		this->_name = toCopy._name;
		this->_attackDamage = toCopy._attackDamage;
		this->_energyPoints = toCopy._energyPoints;
		this->_hitPoints = toCopy._hitPoints;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << BLUE << _name << RESET;
	std::cout << " and my Scaptrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::print()
{
	std::cout << BLUE << _name << "'s status :" << std::endl;
	std::cout << "HP : " << this->_hitPoints << std::endl;
	std::cout << "Energy Points : " << this->_energyPoints << std::endl;
	std::cout << "Attack Damage : " << this->_attackDamage << RESET << std::endl;
}
