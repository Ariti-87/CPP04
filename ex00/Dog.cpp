#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << MAGENTA << "Dog" << RESET << " has been created" << std::endl;
}

Dog::Dog(Dog const& toCopy)
{
	*this = toCopy;
}

Dog::~Dog()
{
	std::cout << MAGENTA << "Dog" << RESET << " has been destroyed" << std::endl;
}

Dog & Dog::operator=(Dog const& toCopy)
{
	if (this != &toCopy)
	{
		this->type = toCopy.type;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << MAGENTA << "Woof" << RESET << std::endl;
}
