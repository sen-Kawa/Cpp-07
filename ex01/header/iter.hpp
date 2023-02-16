#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, int length, void (*f)(T))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
	return ;
}

template<typename T>
void	print(T member)
{
	std::cout << member << std::endl;
	return ;
}

#endif
