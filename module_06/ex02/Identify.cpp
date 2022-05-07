#include "Identify.hpp"

Base::~Base ()
{
	std::cout << "Base destructor called" << std::endl;
}

Base*	generate(void)
{
	int	random;

	srand(time(NULL));
	random = rand() % 3;
	if (random == 1)
		return (new A);
	else if (random == 2)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A&	a = dynamic_cast<A&>(p);
		std::cout << 'A' << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B&	b = dynamic_cast<B&>(p);
		std::cout << 'B' << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	try
	{
		C&	c = dynamic_cast<C&>(p);
		std::cout << 'C' << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	}
}
