#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << RED << "WrongCat" << RESET << " has been created" << std::endl;
}

WrongCat::WrongCat(WrongCat const& toCopy)
{
	*this = toCopy;
}

WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat" << RESET << " has been destroyed" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const& toCopy)
{
	if (this != &toCopy)
	{
		this->type = toCopy.type;
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << RED << "Meow" << RESET << std::endl;
}
