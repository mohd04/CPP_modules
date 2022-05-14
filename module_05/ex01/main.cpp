#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	marcel("Marcel", 150);
	// Form		unnamedform;
	Form		myForm("A38", 10, 10);
	std::cout << std::endl;

	std::cout << "***Exception at form creation demo***" << std::endl;
	std::cout << "**Signing grade too low**" << std::endl;
	try
	{
		Form	nulos("Nulos", 170, 10);
	}
	catch (std::exception& e)
	{
		std::cout << e.what()<< std::endl;
	}

	std::cout << "**Execution grade too low**" << std::endl;
	try
	{
		Form	nulos2("Nulos", 10, 170);
	}
	catch (std::exception& e)
	{
		std::cout << e.what()<< std::endl;
	}
	std::cout << std::endl;


	std::cout << "***Exception at signing demo***" << std::endl;
	std::cout << "**Signing form with signing grade higher than bureaucrat**" << std::endl;
	marcel.signForm(myForm);
	std::cout << myForm << std::endl;
	std::cout << "**Resolution :**" << std::endl;
	marcel.incrementGrade(140);
	marcel.signForm(myForm);
	std::cout << myForm << std::endl;
	std::cout << std::endl;

	return (0);
}
