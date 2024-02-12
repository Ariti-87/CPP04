#ifndef DEF_CAT
#define DEF_CAT

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:

	Cat();
	Cat(Cat const& toCopy);
	virtual ~Cat();
	Cat &operator=(Cat const& toCopy);
	virtual void makeSound() const;
	std::string getBrainIdea(int index) const;

	private:

	Brain *_brain;
};

#endif
