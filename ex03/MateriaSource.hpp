#ifndef DEF_MATERIASOURCE
#define DEF_MATERIASOURCE

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:

	MateriaSource();
	MateriaSource(MateriaSource const& toCopy);
	virtual ~MateriaSource();
	MateriaSource &operator=(MateriaSource const& toCopy);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);

	private:

	AMateria* _learnedMaterias[4];
};

#endif
