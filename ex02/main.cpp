#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// Animal tan;
	Dog sin;
	Cat cos;
	sin.makeSound();
	cos.makeSound();
	std::cout << cos.getBrainIdea(4) << std::endl;
	std::cout << sin.getBrainIdea(4) << std::endl;
	return 0;

	return 0;
}
