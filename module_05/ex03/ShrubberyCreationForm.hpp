#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target = "");
	virtual ~ShrubberyCreationForm();
	virtual void	execute(void) const;
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
