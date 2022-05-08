#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
	std::vector<int>	vec;

	vec.push_back(1);
	vec.push_back(9);
	vec.push_back(32);
	vec.push_back(4242);
	vec.push_back(-42);

	std::cout << easyfind(vec, 4242) << std::endl;
	std::cout << easyfind(vec, 9) << std::endl;
	std::cout << easyfind(vec, 1) << std::endl;
	std::cout << easyfind(vec, -42) << std::endl;
	try
	{
		std::cout << easyfind(vec, 424) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
