#include "Brain.hpp"
#include <cstdlib>

Brain::Brain()
{
	std::cout << YELLOW << "Brain" << RESET << " has been created" << std::endl;
	for (int i = 0; i < 99; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			char random = 'a' + rand() % ('z' - 'a' + 1);
			_ideas[i].push_back(random);
		}
	}
}

Brain::Brain(Brain const& toCopy)
{
	*this = toCopy;
}

Brain::~Brain()
{
	std::cout << YELLOW << "Brain" << RESET << " has been destroyed" << std::endl;
}

Brain & Brain::operator=(Brain const& toCopy)
{
	if (this != &toCopy)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = toCopy._ideas[i];
	}
	return *this;
}

std::string Brain::getBrainIdea(int index) const
{
	if (index > 99 || index < 0)
		return "\0";
	else
		return _ideas[index];
}
