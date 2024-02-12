#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	std::cout << std::endl;
	const WrongAnimal* test = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << test->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	test->makeSound();
	k->makeSound();

	delete k;
	delete test;

 	return 0;
}
