#include "../header/iter.hpp"

int main(void)
{
	std::cout << "ITER TESTER\n" << std::endl;

	std::cout << "Array of even numbers\n" << std::endl;
	int	evens[5] = {2, 4, 6, 8, 10};

	iter(evens, 5, print);

	char	vowels[5] = {'a', 'e', 'i', 'o', 'u'};

	iter(vowels, 5, print);

	std::string	planet_type[4] = {"Giant planet", "Ice giant", "Mesoplanet", "Planetar"};

	iter(planet_type, 5, print);

	return (0);
}

