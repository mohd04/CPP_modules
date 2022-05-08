#include "Data.hpp"

int main(void)
{
	Data data = {"Hello"};

	uintptr_t ptr = serialize(&data);
	Data *res = deserilaize(ptr);

	std::cout << "str = " << data.str << std::endl;
}
