#include "Array.class.hpp"

template<typename T>
Array<T>::Array() : array(NULL), n(0)
{
	return ;
}


template<typename T>
Array<T>::Array(unsigned int n)
{
	array = new T[n];
	n = n;
	for (int i = 0; i < n; i++)
		array[i] = 0;
	return ;
}

template<typename T>
Array<T>::Array(Array<T> const &src) : n(src.n)
{
	array = new T[n];
	for (int i = 0; i < n; i++)
		array[i] = obj.array[i];
	return ;
}
