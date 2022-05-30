/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:47:49 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/30 09:47:49 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : grade(0), name(NULL)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
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
		throw Bureaucrat::GradeTooLowException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& cp)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = cp;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
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

void Bureaucrat::executeForm(Form& form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " excutes " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}

void	Bureaucrat::incrementGrade(const int amount)
{
	if (this->grade - (int)amount > 0)
	{
		this->grade -= amount;
		std::cout << "Bureaucrat " << this->name << " has reached a grade of " << this->grade << "." << std::endl;
	}
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade(const int amount)
{
	if (this->grade + (int)amount > 150)
	{
		this->grade += amount;
		std::cout << "Bureaucrat " << this->name << " has reached a grade of " << this->grade << "." << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Error: Grade is lower than 1.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Error: Grade is higher than 150.";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& cl)
{
	// <name>, bureaucrat grade <grade>.
	os << cl.getName() << ", bureaucrat grade " << cl.getGrade();
	return (os);
}
