#ifndef DEF_CURE
#define DEF_CURE

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:

	Cure();
	Cure(Cure const& toCopy);
	virtual ~Cure();
	Cure &operator=(Cure const& toCopy);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

	private:

};

#endif
