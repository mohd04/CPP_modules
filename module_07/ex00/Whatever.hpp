#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T> void swap(T &arg1, T &arg2)
{
	T	temp;

	temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

template <typename T> T min(T val1, T val2)
{
	if (val2 <= val1)
		return (val2);
	return (val1);
}

template <typename T> T max(T val1, T val2)
{
	if (val2 >= val1)
		return (val2);
	return (val1);
}

#endif
