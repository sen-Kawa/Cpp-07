#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

#include <exception>
#include <iostream>
#include "colours.hpp"

template<typename T>
class Array
{
	private:


	public:

		int	size(void) const;

		T&	operator[](int index);

		Array(void);
		Array(unsigned int n);
		Array(Array const &src);
		Array&	operator=(Array const &assign);
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

#endif

