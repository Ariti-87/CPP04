#ifndef DEF_WRONGANIMAL
#define DEF_WRONGANIMAL

#include "Animal.hpp"

class WrongAnimal
{
	public:

	WrongAnimal();
	WrongAnimal(std::string myType);
	WrongAnimal(WrongAnimal const& toCopy);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const& toCopy);
	std::string getType() const;
	void makeSound() const;

	protected:

	std::string type;
};

#endif
