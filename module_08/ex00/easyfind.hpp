#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
int easyfind(T &container, int val)
{
	typename T::iterator	i;
	i = std::find(container.begin(), container.end(), val);
	if (i == container.end())
		throw (std::out_of_range("Out of range."));
	return (*i);
}

#endif
