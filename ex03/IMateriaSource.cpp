#include "IMateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << MAGENTA << "MateriaSource"<< RESET << " has been created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_learnedMaterias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& toCopy)
{
	for (int i = 0; i < 4; i++)
	{
		if (toCopy._learnedMaterias[i])
			this->_learnedMaterias[i] = toCopy._learnedMaterias[i]->clone();
		else
			this->_learnedMaterias[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << MAGENTA << "MateriaSource"<< RESET << " has been destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnedMaterias[i])
			delete this->_learnedMaterias[i];
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const& toCopy)
{
	if (this != &toCopy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_learnedMaterias[i])
				delete this->_learnedMaterias[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (toCopy._learnedMaterias[i])
				this->_learnedMaterias[i] = toCopy._learnedMaterias[i]->clone();
			else
				this->_learnedMaterias[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if(!_learnedMaterias[i])
		{
			_learnedMaterias[i] = m->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_learnedMaterias[i] && _learnedMaterias[i]->getType() == type)
			return _learnedMaterias[i]->clone();
	}
	return NULL;
}
