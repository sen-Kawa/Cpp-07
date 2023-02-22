#include "Array.class.hpp"

template<typename T>
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
	this->n = n;
	array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		array[i] = 0;
	return ;
}

template<typename T>
Array<T>::Array(Array<T> const &src) : n(src.n)
{
	array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		array[i] = src.array[i];
	return ;
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const &assign)
{
	delete[] this->array;
	n = assign.n;
	array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		array[i] = assign.array[i];
	return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index > this->n - 1)
		throw Array::OutOfBoundsException();
	return (array[index]);
}

template<typename T>
Array<T>::~Array()
{
	delete [] array;
	return ;
}
