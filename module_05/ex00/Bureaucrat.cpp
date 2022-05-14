#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name), grade(_grade)
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

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
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
	os << cl.getName() << ", bureaucrat grade " << cl.getGrade();
	return (os);
}
