#include "Character.hpp"

Character::Character()
{
	std::cout << LGREEN << this->_name << RESET << " has been created" << std::endl;
}

Character::Character(std::string const& myName) : _name(myName)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const& toCopy)
{
	this->_name = toCopy._name;
	for (int i = 0; i < 4; i++)
	{
		if (toCopy._inventory[i])
			this->_inventory[i] = toCopy._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character::~Character()
{
	std::cout << LGREEN << this->_name << RESET << " has been destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character & Character::operator=(Character const& toCopy)
{
	if (this != &toCopy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
		}
		this->_name = toCopy._name;
		for (int i = 0; i < 4; i++)
		{
			if (toCopy._inventory[i])
				this->_inventory[i] = toCopy._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return *this;
}


std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if(!_inventory[i])
		{
			_inventory[i] = m->clone();
			std::cout << this->_name << " succesfully equip AMateria " << std::endl;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		delete _inventory[idx];
		_inventory[idx] = NULL;
		std::cout << this->_name << " succesfully unequip AMateria " << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}
