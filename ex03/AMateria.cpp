#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << BLUE << "AMateria" << RESET << " has been created" << std::endl;

}

AMateria::AMateria(std::string const& type) : _type(type)
{}

AMateria::AMateria(AMateria const& toCopy)
{
	*this = toCopy;
}

AMateria::~AMateria()
{
	std::cout << BLUE << "AMateria" << RESET << " has been destroyed" << std::endl;
}

AMateria & AMateria::operator=(AMateria const& toCopy)
{
	if (this != &toCopy)
	{
		this->_type = toCopy._type;
	}
	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
}

// AMateria* AMateria::clone() const
// {}

void AMateria::use(ICharacter& target)
{
	(void) target;
	// std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}
