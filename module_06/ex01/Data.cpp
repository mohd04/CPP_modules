#include "Data.hpp"

Data*	deserilaize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
