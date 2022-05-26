#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat levi("Levi", 1);
	Bureaucrat alaa("Alaa", 150);
	ShrubberyCreationForm sh_form("Bait al shay");
	RobotomyRequestForm fran("Francisco");
	PresidentialPardonForm pardon("no");

	std::cout << "Wrong person" << std::endl;
	alaa.signForm(sh_form);
	std::cout << sh_form << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << sh_form << std::endl;
	levi.executeForm(sh_form);
	std::cout << "-----------------------" << std::endl;
	levi.signForm(sh_form);
	std::cout << sh_form << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << sh_form << std::endl;
	alaa.executeForm(sh_form);
	std::cout << "-----------------------" << std::endl;
	std::cout << sh_form << std::endl;
	levi.executeForm(sh_form);
	std::cout << "-----------------------" << std::endl;

	std::cout << "Wrong person" << std::endl;
	alaa.signForm(fran);
	std::cout << fran << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << fran << std::endl;
	levi.executeForm(fran);
	std::cout << "-----------------------" << std::endl;
	levi.signForm(fran);
	std::cout << fran << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << fran << std::endl;
	alaa.executeForm(fran);
	std::cout << "-----------------------" << std::endl;
	std::cout << fran << std::endl;
	levi.executeForm(fran);
	std::cout << "-----------------------" << std::endl;

	std::cout << "Wrong person" << std::endl;
	alaa.signForm(pardon);
	std::cout << pardon << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << pardon << std::endl;
	levi.executeForm(pardon);
	std::cout << "-----------------------" << std::endl;
	levi.signForm(pardon);
	std::cout << pardon << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << pardon << std::endl;
	alaa.executeForm(pardon);
	std::cout << "-----------------------" << std::endl;
	std::cout << pardon << std::endl;
	levi.executeForm(pardon);
	std::cout << "-----------------------" << std::endl;

	return (0);
}
