#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T> void iter(T* ary, int len, void (*func)(T&))
{
	for (int i = 0; i < len; i++)
		func(ary[i]);
}

template <typename T> void print(T& ary)
{
	std::cout << ary << std::endl;
}

template <typename T> void increment(T& ary)
{
	++ary;
}

#endif
