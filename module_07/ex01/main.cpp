#include "iter.hpp"

int main()
{
	char charary[4] = "how";
	iter(charary, 4, print);
	std::cout << std::endl;
	iter(charary, 4, increment);
	iter(charary, 4, print);
	std::cout << std::endl;

	int intary[] {2, 3, 5, 6};
	iter(intary, 4, print);
	std::cout << std::endl;
	iter(intary, 4, increment);
	iter(intary, 4, print);
	std::cout << std::endl;
	return (0);
}
