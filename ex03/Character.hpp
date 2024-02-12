#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:

	Character();
	Character(std::string const& myName);
	Character(Character const& toCopy);
	virtual ~Character();
	Character &operator=(Character const& toCopy);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	private:

	std::string _name;
	AMateria* _inventory[4];
};
