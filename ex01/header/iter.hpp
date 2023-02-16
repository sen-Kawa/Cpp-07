#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *address, int length, void (*f)(T))
{
	return ;
}

template<typename T>
void	print(T member)
{
	std::cout << member << std::endl;
	return ;
}

#endif
