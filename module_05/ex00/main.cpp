#include <Bureaucrat.hpp>

int	main(void)
{
	Bureaucrat	viraj("viraj", 150);
	Bureaucrat	umar("Umar", 1);
	std::cout << std::endl;

	std::cout << "***Exception at creation demo***" << std::endl;
	try
	{
		Bureaucrat	pavan("pavan", 170);
	}
	catch (std::exception& e)
	{
		std::cout << e.what()<< std::endl;
	}

	try
	{
		Bureaucrat	pavan2("pavan", 0);
	}
	catch (std::exception& e)
	{
		std::cout << e.what()<< std::endl;
	}
	std::cout << std::endl;


	std::cout << "***Exception at increasing demo***" << std::endl;
	viraj.incrementGrade(100);
	try
	{
		viraj.incrementGrade(100);
	}
	catch (std::exception& e)
	{
		std::cout << e.what()<< std::endl;
	}
	std::cout << viraj << std::endl;
	std::cout << std::endl;


	std::cout << "***Exception at decreasing demo***" << std::endl;
	umar.decrementGrade(100);
	try
	{
		umar.decrementGrade(100);
	}
	catch (std::exception& e)
	{
		std::cout << e.what()<< std::endl;
	}
	std::cout << umar << std::endl;
	std::cout << std::endl;

	return (0);
}
