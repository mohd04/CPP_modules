#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	std::string	str;
};

Data*	deserilaize(uintptr_t raw);

uintptr_t	serialize(Data* ptr);

#endif
