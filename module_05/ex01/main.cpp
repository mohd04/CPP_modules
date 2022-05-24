#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat* setInfo(std::string name, int grade) {
	try
	{
		return new Bureaucrat(name, grade);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return NULL;
	}
}

int main() {
	Bureaucrat* Yash = setInfo("Yash", 9);

	Form form("accounting", 5, 7);
	Form cpForm = form;

	std::cout << cpForm;

	std::cout << *Yash;
	Yash->signForm(cpForm);
	std::cout << cpForm;

	delete Yash;

	return 0;
}
