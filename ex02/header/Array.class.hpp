#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

#include <exception>
#include <iostream>
#include <stdlib.h>
#include "colours.hpp"

template<typename T>
class Array
{
	private:

		unsigned int	 n;
		T*				array;

	public:

		unsigned int	size(void) const;

		Array(void);
		Array(unsigned int n);
		Array(Array const &src);
		Array&	operator=(Array const &assign);
		T&		operator[](unsigned int index);
		~Array(void);
		
		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Out of bounds.");
				}	
		};
};
#include "Array.class.tpp"

#endif
