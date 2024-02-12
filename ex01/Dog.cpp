#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << MAGENTA << "Dog" << RESET << " has been created" << std::endl;
	_brain = new Brain();
}

Dog::Dog(Dog const& toCopy) : Animal::Animal(toCopy)
{
	this->_brain = new Brain(*toCopy._brain);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << MAGENTA << "Dog" << RESET << " has been destroyed" << std::endl;
}

Dog & Dog::operator=(Dog const& toCopy)
{
	if (this != &toCopy)
	{
		this->type = toCopy.type;
		delete _brain;
		this->_brain = new Brain(*toCopy._brain);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << MAGENTA << "Woof" << RESET << std::endl;
}


std::string Dog::getBrainIdea(int index) const
{
	if (index > 99 || index < 0)
	{
		std::cout << RED << "Brain" << RESET << " exploded" << std::endl;
		return "\0";
	}
	else
		return _brain->getBrainIdea(index);
}
