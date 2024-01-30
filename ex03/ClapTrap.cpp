#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("noname"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Object ClapTrap has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string myName) : _name(myName), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{

	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << " , causing ";
		std::cout << YELLOW << _attackDamage << " points of damage!" << RESET << std::endl;
	}
	else
	{
		if (_energyPoints <= 0)
			std::cout << "ClapTrap " << _name << " has no energy for attacks" << std::endl;
		else
			std::cout << RED << "ClapTrap " << _name << " can't attack" << RESET << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << YELLOW << amount << " damage." << RESET;
		std::cout << "Remaining " << GREEN << "hit points : " <<_hitPoints << RESET << std::endl;
		if (_hitPoints <= 0)
			std::cout << RED << "ClapTrap " << _name << " is dead" << RESET << std::endl;
	}
	else
	{
		std::cout << RED << "ClapTrap " << _name << " can't take more damage" << RESET << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{

	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " is repaired, gaining " << amount << " hit points.Remaining ";
		std::cout << GREEN << "hit points : " << _hitPoints << RESET << std::endl;
	}
	else
	{
		if (_energyPoints <= 0)
			std::cout << "ClapTrap " << _name << " has no energy for heals" << std::endl;
		else
			std::cout << RED << "ClapTrap " << _name << " can't repair" << RESET << std::endl;

	}
}


ClapTrap::ClapTrap(ClapTrap const& toCopy)
{
	*this = toCopy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const& toCopy)
{
	if (this != &toCopy)
	{
		_name = toCopy.getName();
		_hitPoints = toCopy.getHitPoints();
		_energyPoints = toCopy.getEnergyPoints();
		_attackDamage = toCopy.getAttackDamage();
	}
	return *this;
}

void ClapTrap::setHitPoints(int myHitPoints)
{
	_hitPoints = myHitPoints;
}

void ClapTrap::setEnergyPoints(int myEnergyPoints)
{
	_energyPoints = myEnergyPoints;
}

void ClapTrap::setAttackDamage(int myAttackDamage)
{
	_attackDamage = myAttackDamage;
}

std::string ClapTrap::getName() const
{
	return _name;
}

int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}

int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}
