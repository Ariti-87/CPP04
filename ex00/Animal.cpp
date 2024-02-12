#include "Animal.hpp"

Animal::Animal() : type("Unknown")
{
	std::cout << CYAN << "Animal" << RESET << " has been created" << std::endl;
}

Animal::Animal(std::string myType) : type(myType)
{
	std::cout << CYAN << "Animal" << RESET << " has been created" << std::endl;
}


Animal::Animal(Animal const& toCopy)
{
	*this = toCopy;
}

Animal::~Animal()
{
	std::cout << CYAN << "Animal" << RESET << " has been destroyed" << std::endl;
}

Animal & Animal::operator=(Animal const& toCopy)
{
	if (this != &toCopy)
	{
		this->type = toCopy.type;
	}
	return *this;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{}
