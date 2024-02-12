#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << BLUE << "Cat" << RESET << " has been created" << std::endl;
	_brain = new Brain();
}

Cat::Cat(Cat const& toCopy) : Animal::Animal(toCopy)
{
	this->_brain = new Brain(*toCopy._brain);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << BLUE << "Cat" << RESET << " has been destroyed" << std::endl;
}

Cat & Cat::operator=(Cat const& toCopy)
{
	if (this != &toCopy)
	{
		this->type = toCopy.type;
		delete _brain;
		this->_brain = new Brain(*toCopy._brain);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << BLUE << "Meow" << RESET << std::endl;
}

std::string Cat::getBrainIdea(int index) const
{
	if (index > 99 || index < 0)
	{
		std::cout << RED << "Brain" << RESET << " exploded" << std::endl;
		return "\0";
	}
	else
		return _brain->getBrainIdea(index);
}
