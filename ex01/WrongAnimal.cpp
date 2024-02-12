#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown")
{
	std::cout << CYAN << "WrongAnimal" << RESET << " has been created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string myType) : type(myType)
{
	std::cout << CYAN << "WrongAnimal" << RESET << " has been created" << std::endl;
}


WrongAnimal::WrongAnimal(WrongAnimal const& toCopy)
{
	*this = toCopy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << CYAN << "WrongAnimal" << RESET << " has been destroyed" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const& toCopy)
{
	if (this != &toCopy)
	{
		this->type = toCopy.type;
	}
	return *this;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << CYAN << "grrrrr" << RESET << std::endl;
}
