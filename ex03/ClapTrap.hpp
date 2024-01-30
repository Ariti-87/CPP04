#ifndef DEF_CLAPTRAP
#define DEF_CLAPTRAP

#include <iostream>

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

class ClapTrap
{
	public:

	ClapTrap();
	ClapTrap(std::string myName);
	~ClapTrap();
	ClapTrap(ClapTrap const &toCopy);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setHitPoints(int myHitPoints);
	void setEnergyPoints(int myEnergyPoints);
	void setAttackDamage(int myAttackDamage);
	std::string getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
	ClapTrap& operator=(ClapTrap const &toCopy);

	protected:

	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
};

#endif
