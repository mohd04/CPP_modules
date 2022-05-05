#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#pragma once
#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& cp);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& op);

	std::string	getName(void) const;
	int			getGrade(void) const;
	void		incrementGrade(const int grade);
	void		decrementGrade(const int grade);

	struct	tooHighException : std::exception
	{
		const char*	what() const throw()
		{
			return ("Error: Grade is too high.\n");
		}
	};
	struct	tooLowException : std::exception
	{
		const char*	what() const throw()
		{
			return ("Error: Grade is too low.\n");
		}
	};

private:
	int			grade;
	std::string	name;

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& cl);

#endif
