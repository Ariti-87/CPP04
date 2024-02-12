#ifndef DEF_IMATERIASOURCE
#define DEF_IMATERIASOURCE

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
	public:

	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* m) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

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
