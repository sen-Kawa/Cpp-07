#include <iostream>
#include "../header/Array.class.hpp"

#define MAX_VAL 750

int main(int, char**)
{
	std::cout << YELLOW << ">> Instantiating..." << DEF << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
	std::cout << YELLOW << ">> Subscript operator [] overload test" << DEF << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
		std::cout << YELLOW << ">> Assignment overload test" << DEF << std::endl;
        Array<int> tmp = numbers;
		std::cout << YELLOW << ">> Copy constructor test" << DEF << std::endl;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
		std::cout << YELLOW << ">> Exception borders test" << DEF << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
		std::cout << YELLOW << ">> Exception borders test" << DEF << std::endl;
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
