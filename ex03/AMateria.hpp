#ifndef DEF_AMATERIA
#define DEF_AMATERIA

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public:

	AMateria();
	AMateria(std::string const& type);
	AMateria(AMateria const& toCopy);
	virtual ~AMateria();
	AMateria &operator=(AMateria const& toCopy);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	protected:

	std::string _type;
};

#endif
