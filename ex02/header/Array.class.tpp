#include "Array.class.hpp"

unsigned int Array<T>::size() const
{
	return (n);
}

template<typename T>
Array<T>::Array() : array(NULL), n(0)
{
	return ;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	array = NULL;
	if (n > 0)
		array = new T[n];
	n = n;
	for (int i = 0; i < n; i++)
		array[i] = 0;
	return ;
}

template<typename T>
Array<T>::Array(Array<T> const &src) : n(src.n)
{
	array = NULL;
	if (n > 0)
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
	array = NULL;
	if (n > 0)
		array = new T[n];
	for (int i = 0; i < n; i++)
		array[i] = assign.array[i];
	return (*this);
}

template<typename T>
T& Array<T>::operator[](int index)
{
	if (index > n || n == 0)
		throw Assign::OutOfBoundsException();
	return (array[index]);
}

template<typename T>
Array<T>::~Array()
{
	if (n > 0)
		delete [] array;
	return ;
}
