#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
T const	&max(T const &x, T const &y)
{
	return (x >= y ? x : y);
}

#endif
