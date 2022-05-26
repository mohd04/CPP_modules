#include "Intern.hpp"

void test_form(Form &form, Bureaucrat &levi, Bureaucrat &alaa)
{
	alaa.signForm(form);
	levi.executeForm(form);
	levi.signForm(form);
	alaa.executeForm(form);
	levi.executeForm(form);
	std::cout << std::endl;
}

int main()
{
	{
		Bureaucrat levi("levi", 1);
		Bureaucrat alaa("alaa", 150);
		Intern ivan;
		Form *form;
		try {
			form = ivan.makeForm("Shrubbery Creation Form", "rashidiya");
			test_form(*form, levi, alaa);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form = ivan.makeForm("Robotomy Request Form", "Francisco");
			test_form(*form, levi, alaa);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form = ivan.makeForm("Presidential Pardon Form", "no");
			test_form(*form, levi, alaa);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form = ivan.makeForm("alaa", "target");
			test_form(*form, levi, alaa);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
