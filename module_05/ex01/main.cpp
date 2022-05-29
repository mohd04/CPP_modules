#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		Form	form("accounting", 10, 3);
		Bureaucrat	yash("yash", 11);
		Bureaucrat	pavan("pavan", 9);

		std::cout << form << std::endl;
		pavan.signForm(form);
		std::cout << form << std::endl;

		yash.signForm(form);
		std::cout << form << std::endl;
	}
	std::cout << "------------" << std::endl;
	{
		Form	*finance = new Form("finance", 50, 50);
		Bureaucrat	azza("azza", 50);

		std::cout << *finance << std::endl;
		std::cout << "> Signing form '" << finance->getName() << "' with " << azza.getName() << std::endl;
		finance->beSigned(azza);
		std::cout << *finance << std::endl;

		delete (finance);
	}
	return (0);
}
