#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
	std::ifstream		input;
	std::ostringstream	in_to_file;
	std::ofstream		output;
	std::string			replace;
	std::string			output_name;
	std::size_t			pos;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	if (av[2] == 0 || av[3] == 0)
	{
		std::cout << "Empty strings provided" << std::endl;
		return (1);
	}
	input.open(av[1], std::fstream::in);
	if (!input.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	output_name = av[1];
	output_name += ".replace";
	output.open(output_name.c_str(), std::fstream::out|std::fstream::trunc);
	if (!output.is_open())
	{
		std::cout << "Error creating file " << av[1] << ".replace" << std::endl;
		input.close();
		return (1);
	}
	in_to_file << input.rdbuf();
	replace = in_to_file.str();
	input.close();
	while ((pos = replace.find(av[2])) != std::string::npos)
	{
		replace.erase(pos, std::string(av[2]).size());
		replace.insert(pos, av[3]);
	}
	output << replace;
	output.close();
	return (0);
}
