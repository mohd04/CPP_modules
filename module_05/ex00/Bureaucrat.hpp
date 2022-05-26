#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	int			grade;
	std::string	name;
	Bureaucrat();
public:
	Bureaucrat(std::string _name, int _grade);
	Bureaucrat(const Bureaucrat& cp);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& op);

	std::string	const& getName(void) const;
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


};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& cl);

#endif
