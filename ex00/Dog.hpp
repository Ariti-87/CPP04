#ifndef DEF_DOG
#define DEF_DOG

#include "Animal.hpp"

class Dog : public Animal
{
	public:

	Dog();
	Dog(Dog const& toCopy);
	virtual ~Dog();
	Dog &operator=(Dog const& toCopy);
	virtual void makeSound() const;

};

#endif
