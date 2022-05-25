#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : grade(0), name(NULL)
{
	std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): grade(_grade), name(_name)
{
	std::cout << "Constructor called" << std::endl;
	if (_grade > 0 && _grade <= 150)
	{
		if (!_name.empty())
		{
			std::cout << "Bureaucrat " << this->name << " has a grade of " << this->grade << "." << std::endl;
		}
		else
			std::cout << "Does the Bureaucrat exists?" << std::endl;
	}
	else if (_grade < 1)
		throw Bureaucrat::tooLowException();
	else if (_grade > 150)
		throw Bureaucrat::tooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& cp)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = cp;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Decontructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& op)
{
	if (this != &op)
	{
		this->name = op.name;
		this->grade = op.grade;
	}
	return (*this);
}

std::string	const& Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::signForm(Form& form) {
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " cannot sign " << form.getName() << " because sign grade is too low." << std::endl;
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::incrementGrade(const int amount)
{
	if (this->grade - (int)amount < 0)
	{
		this->grade -= amount;
		std::cout << "Bureaucrat " << this->name << " has reached a grade of " << this->grade << "." << std::endl;
	}
	else
		throw Bureaucrat::tooLowException();
}

void	Bureaucrat::decrementGrade(const int amount)
{
	if (this->grade + (int)amount < 150)
	{
		this->grade += amount;
		std::cout << "Bureaucrat " << this->name << " has reached a grade of " << this->grade << "." << std::endl;
	}
	else
		throw Bureaucrat::tooHighException();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& cl)
{
	// <name>, bureaucrat grade <grade>.
	os << cl.getName() << ", bureaucrat grade " << cl.getGrade() << std::endl;
	return (os);
}
