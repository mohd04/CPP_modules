#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& src);
	Intern& operator=(const Intern& src);
	~Intern();
	Form* makeForm(std::string form, std::string target);
	Form* makeShru(std::string form, std::string target);
	Form* makeRobo(std::string form, std::string target);
	Form* makePres(std::string form, std::string target);
	class NotKnownException: public std::exception
	{
	public:
		NotKnownException() {}
		virtual ~NotKnownException() throw() {}
		virtual const char* what() const throw();
	};

};

#endif
