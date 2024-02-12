#ifndef DEF_BRAIN
#define DEF_BRAIN

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

#include <iostream>

class Brain
{
	public:

	Brain();
	Brain(Brain const& toCopy);
	~Brain();
	Brain &operator=(Brain const& toCopy);
	std::string getBrainIdea(int index) const;

	private:

	std::string _ideas[100];
};

#endif
