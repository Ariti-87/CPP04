#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap pi("Pi");
	ScavTrap sin("Sin");
	FragTrap cos("Cos");
	DiamondTrap tan("Tan");
	tan.whoAmI();
	tan.print();

	return 0;
}
