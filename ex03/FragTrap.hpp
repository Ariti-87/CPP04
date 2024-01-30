#ifndef DEF_FRAGTRAP
#define DEF_FRAGTRAP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

	FragTrap();
	FragTrap(std::string myName);
	~FragTrap();
	FragTrap(FragTrap const& toCopy);
	void highFivesGuys(void);
	FragTrap &operator=(FragTrap const& toCopy);

	private:
};

#endif
