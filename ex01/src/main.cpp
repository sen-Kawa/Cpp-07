#include "../header/iter.hpp"

#define YELLOW "\033[2;33m"
#define RED "\033[2;31m" 
#define CYAN "\033[2;36m"
#define DEF "\033[0m"

int main(void)
{
	std::cout << CYAN << "ITER TESTER" << DEF << std::endl;

	std::cout << YELLOW << ">> Test 1 - Ints" << DEF << std::endl;
	int	evens[5] = {2, 4, 6, 8, 10};

	iter(evens, 5, print);

	char	vowels[5] = {'a', 'e', 'i', 'o', 'u'};

	std::cout << YELLOW << "\n>> Test 2 - Chars" << DEF << std::endl;
	iter(vowels, 5, print);

	std::cout << YELLOW << "\n>> Test 3 - Strings" << DEF << std::endl;
	std::string	planet_type[4] = {"Giant planet", "Ice giant", "Mesoplanet", "Planetar"};

	iter(planet_type, 4, print);

	return (0);
}

