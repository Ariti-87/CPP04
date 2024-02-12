#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << GREEN << "Cure" << RESET << " has been created" << std::endl;
}

Cure::Cure(Cure const& toCopy) : AMateria::AMateria(toCopy)
{
}

Cure::~Cure()
{
	std::cout << GREEN << "Cure" << RESET << " has been destroyed" << std::endl;
}

Cure & Cure::operator=(Cure const& toCopy)
{
	if (this != &toCopy)
	{
		this->_type = toCopy._type;
	}
	return *this;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << GREEN << "* heals " << target.getName() << "’s wounds *" << RESET << std::endl;
}
