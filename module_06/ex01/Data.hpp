#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	std::string	str;
};

Data*	deserilaize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

#endif
