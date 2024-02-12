#ifndef DEF_ICE
#define DEF_ICE

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:

	Ice();
	Ice(Ice const& toCopy);
	virtual ~Ice();
	Ice &operator=(Ice const& toCopy);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

	private:

};

#endif
