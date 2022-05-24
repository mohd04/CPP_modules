#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& cp);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& op);

	void		signForm(Form& form);
	void		executeForm(Form& form);
	std::string const &	getName(void) const;
	int			getGrade(void) const;
	void		incrementGrade(const int amount);
	void		decrementGrade(const int amount);

	struct	tooHighException : public std::exception
	{
		const char*	what() const throw()
		{
			return ("Error: Grade is too high.\n");
		}
	};
	struct	tooLowException : public std::exception
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
