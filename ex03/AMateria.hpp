#ifndef DEF_AMATERIA
#define DEF_AMATERIA

#define RED "\033[31m"
#define YELLOW "\033[33m"
#define VIOLET "\033[35m"
#define GREEN "\033[32m"
#define LGREEN "\033[92m"
#define BLUE "\033[34m"
#define WHITE "\033[37m"
#define BLACK "\033[30m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

#include <iostream>
// #include "ICharacter.hpp"

class ICharacter;
class Character;

class AMateria
{
	public:

	AMateria();
	AMateria(std::string const& type);
	AMateria(AMateria const& toCopy);
	virtual ~AMateria();
	AMateria &operator=(AMateria const& toCopy);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	protected:

	std::string _type;
};

#endif
