#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

#include <iostream>
#include "colours.hpp"

template<typename T>
class Array
{
	private:


	public:

		int	getArray(void) const;

		Array(void);
		Array(Array const &src);
		Array&	operator=(Array const &assign);
		~Array(void);
};

#endif

