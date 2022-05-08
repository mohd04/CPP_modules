#include <iostream>
#include <cmath>
#include <cstring>
#include <limits>

bool	is_number(std::string num);

int main(int ac, char **av)
{
	int		i;
	char	c;
	float	f;
	double	d;

	if (ac != 2)
	{
		std::cout << "Invalid argument.\n" << std::endl;
		return (0);
	}
	std::string		str(av[1]);
	for (int i = 0; i < str[i]; i++)
		str[i] = tolower(str[i]);
	if (str.length() == 1 && (av[1][0] < 0 || av[1][0] > '9'))
	{
		c = av[1][0];
		i = static_cast<int>(av[1][0]);
		d = static_cast<double>(av[1][0]);
		f = static_cast<float>(av[1][0]);
	}
	else if (is_number(str) || str == "nan" || str == "nanf" || str == "+inf"
		|| str == "+inff" || str == "inf" || str == "inff" || str == "-inf"
		|| str == "-inff")
	{
		c = static_cast<char>(strtod(av[1], 0));
		i = static_cast<int>(strtod(av[1], 0));
		d = static_cast<double>(strtod(av[1], 0));
		f = static_cast<float>(strtod(av[1], 0));
	}
	else
	{
		std::cout << str << " is a invalid argument." <<std::endl;
		return (0);
	}
	std::cout << "char\t:";
	if (std::isnan(d) || std::isinf(d))
		std::cout << "impossible" << std::endl;
	else if (isprint(c) == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << c << std::endl;

	std::cout << "int\t:";
	if (std::isnan(d) || std::isinf(d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << "\'" << i << "\'" << std::endl;

	std::cout << "float\t:" << f;
	if (f - i == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;

	std::cout << "double\t:" << d;
	if (d - i == 0)
		std::cout << ".0";
	std::cout << std::endl;
	return (0);
}

bool	is_number(std::string s)
{
	std::string::iterator	i = s.begin();
	while (std::isdigit(*i) && i != s.end())
		++i;
	if (*i == '.' && i != s.end())
	{
		++i;
		while (std::isdigit(*i) && i != s.end())
			++i;
		if (*i == 'f' && i != s.end())
			++i;
	}
	return (i == s.end() && *--i != '.' && !s.empty());
}
