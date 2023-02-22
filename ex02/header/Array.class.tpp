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
		array[i] = src.array[i];
	return ;
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const &assign)
{
	if (array)
		delete[] array;
	n = assign.n;
	array = new T[n];
	for (int i = 0; i < n; i++)
		array[i] = assign.array[i];
	return ;
}
