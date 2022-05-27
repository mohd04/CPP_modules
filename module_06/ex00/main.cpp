#include "casting.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		throw std::invalid_argument("Error: invalid argument\n");
	Casting conv(av[1]);
	conv.outString();
	return (0);
}
