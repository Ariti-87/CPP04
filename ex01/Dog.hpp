#ifndef DEF_DOG
#define DEF_DOG

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:

	Dog();
	Dog(Dog const& toCopy);
	virtual ~Dog();
	Dog &operator=(Dog const& toCopy);
	virtual void makeSound() const;
	std::string getBrainIdea(int index) const;

	private:

	Brain *_brain;
};

#endif
