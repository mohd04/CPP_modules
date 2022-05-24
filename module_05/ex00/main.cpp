#include "Bureaucrat.hpp"

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
	Bureaucrat* low = setInfo("low", -1);
	Bureaucrat* high = setInfo("high", 200);
	Bureaucrat* Yash = setInfo("Yash", 5);
	Bureaucrat* Pavan = setInfo("Pavan", 148);
	Bureaucrat me(*Yash);

	delete low;
	delete high;

	std::cout << "------------------------" << std::endl;
	try
	{
		me.incrementGrade(2);
		std::cout << me;
		me.incrementGrade(2);
		std::cout << me;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << me;
	std::cout << "------------------------" << std::endl;
	try
	{
		Pavan->decrementGrade(2);
		std::cout << *Pavan;
		Pavan->decrementGrade(1);
		std::cout << *Pavan;
		Pavan->decrementGrade(6);
		std::cout << *Pavan;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *Pavan;

	delete Yash;
	delete Pavan;

	return 0;
}
