#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(): Form("Shrubbery Creation Form", 145, 137) {}
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& cp);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& cp);
	virtual ~ShrubberyCreationForm();
	virtual void	execute(Bureaucrat const& executor) const;
	struct noTarget : std::exception
	{
		const char* what() const throw()
		{
			return ("No target provided.");
		}
	};

private:
	std::string	target;

};

#endif
