#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;

	}

		std::cout << std::endl << "//////////		AMateria tests		/////////" << std::endl;

		Character p("P");

	{
		std::cout << std::endl << "////////		Ice TESTS		///////" << std::endl;

		Ice a;
		Ice a2(a);

		Ice a3;
		a.use(p);
		a2.use(p);
		a3.use(p);

		AMateria *pa = a.clone();

		pa->use(p);

		delete pa;
	}

		std::cout << std::endl;

	{
		std::cout << std::endl << "////////		Cure TESTS		///////" << std::endl;

		Cure a;
		Cure a2(a);

		Cure a3;
		a.use(p);
		a2.use(p);
		a3.use(p);

		AMateria *pa = a.clone();

		pa->use(p);

		delete pa;

	}

		std::cout << std::endl;

	{
		std::cout << std::endl << "////////		Character TESTS		///////" << std::endl;

		Character	p2(p);
		Character	p3("P3");

		Ice			a;
		Ice			a2;
		Cure		b;
		Cure		b2;
		AMateria	*pa = new Ice;

		std::cout << std::endl;

		p.use(-1, p2);
		p.use(0, p2);
		p.equip(a.clone());
		p.use(0, p3);
		p.use(1, p3);

		p3.equip(b.clone());
		p3.use(0, p2);
		p3.use(0, p);
		p2 = p3;
		p2.use(0, p);

		p.equip(a2.clone());
		p.equip(b.clone());
		p.equip(pa);

		p.use(0, p3);
		p.use(1, p3);
		p.use(2, p3);
		p.use(3, p3);
		p.unequip(3);
		p.use(3, p3);

		std::cout << std::endl << "///////	Deep copy tests /////////" << std::endl;

		Character copy(p);
		Character ccopy("p2");

		copy.use(0, p3);
		copy.use(1, p3);
		copy.use(2, p3);
		copy.use(3, p3);

		ccopy = p;

		ccopy.use(0, p3);
		ccopy.use(1, p3);
		ccopy.use(2, p3);
		ccopy.use(3, p3);


		delete pa;

		std::cout << std::endl;

	}

		std::cout << std::endl;

	return (0);
}
