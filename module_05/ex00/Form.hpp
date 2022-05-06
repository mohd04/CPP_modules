#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
public:
	Form(std::string _name, int sgrade, int egrade);
	Form(const Form& cp);
	~Form();

	Form& operator=(const Form& op);
	std::string		getName(void) const;
	int				getExecGrade(void) const;
	int				getSigningGrade(void) const;
	void			beSigned(Bureaucrat& agent);
	bool			isSigned(void) const;

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
	std::string const	_name;
	bool				_isSigned;
	const int			_execGrade;
	const int			_signingGrade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& cl);

#endif