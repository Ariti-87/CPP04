#ifndef DEF_ANIMAL
#define DEF_ANIMAL

#define RED "\033[31m"
#define YELLOW "\033[33m"
#define VIOLET "\033[35m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define WHITE "\033[37m"
#define BLACK "\033[30m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

#include <iostream>

class Animal
{
	public:

	Animal();
	Animal(std::string myType);
	Animal(Animal const& toCopy);
	virtual ~Animal();
	Animal &operator=(Animal const& toCopy);
	std::string getType() const;
	virtual void makeSound() const;

	protected:

	std::string type;
};

#endif
