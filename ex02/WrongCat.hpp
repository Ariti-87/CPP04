#ifndef DEF_WRONGCAT
#define DEF_WRONGCAT

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

	WrongCat();
	WrongCat(WrongCat const& toCopy);
	virtual ~WrongCat();
	WrongCat &operator=(WrongCat const& toCopy);
	void makeSound() const;
};

#endif
