#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *ArrayAnimal[10];
	for (int i = 0; i < 5; i++)
		ArrayAnimal[i] = new Dog();
	for (int i = 5; i < 10; i++)
		ArrayAnimal[i] = new Cat();

	std::cout << std::endl;

	ArrayAnimal[0]->makeSound();
	std::cout << ArrayAnimal[3]->getType() << std::endl;
	ArrayAnimal[9]->makeSound();
	std::cout << ArrayAnimal[7]->getType() << std::endl;

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete ArrayAnimal[i];

	std::cout << std::endl;

	Dog sin;
	sin.makeSound();
	Dog cos;
	cos = sin;
	std::cout << cos.getBrainIdea(4) << std::endl;
	std::cout << sin.getBrainIdea(4) << std::endl;
	return 0;
}
