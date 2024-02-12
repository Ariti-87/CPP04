#ifndef DEF_CAT
#define DEF_CAT

#include "Animal.hpp"

class Cat : public Animal
{
	public:

	Cat();
	Cat(Cat const& toCopy);
	virtual ~Cat();
	Cat &operator=(Cat const& toCopy);
	virtual void makeSound() const;
};

#endif
