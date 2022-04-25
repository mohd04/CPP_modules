#include <iostream>

void	ft_toupper_str(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		std::cout << str[i];
	}
}

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
		ft_toupper_str(av[i]);
	std::cout << std::endl;
	return (0);
}
