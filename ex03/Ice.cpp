#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << CYAN << "Default Ice" << RESET << " has been created" << std::endl;
}

Ice::Ice(Ice const& toCopy) : AMateria::AMateria(toCopy)
{
	std::cout << CYAN << "Ice" << RESET << " has been created" << std::endl;
}

Ice::~Ice()
{
	std::cout << CYAN << "Ice" << RESET << " has been destroyed" << std::endl;
}

Ice & Ice::operator=(Ice const& toCopy)
{
	if (this != &toCopy)
	{
		this->_type = toCopy._type;
	}
	return *this;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << CYAN << "* shoots an ice bolt at " << target.getName() << " *"<< RESET << std::endl;
}
