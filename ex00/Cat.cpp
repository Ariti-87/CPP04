#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << BLUE << "Cat" << RESET << " has been created" << std::endl;
}

Cat::Cat(Cat const& toCopy)
{
	*this = toCopy;
}

Cat::~Cat()
{
	std::cout << BLUE << "Cat" << RESET << " has been destroyed" << std::endl;
}

Cat & Cat::operator=(Cat const& toCopy)
{
	if (this != &toCopy)
	{
		this->type = toCopy.type;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << BLUE << "Meow" << RESET << std::endl;
}
