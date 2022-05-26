#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <stdlib.h>
# include <time.h>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(): Form("Robotomy Request Form", 72, 49) {}
	RobotomyRequestForm(std::string targ);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm& cp);
	std::string const & getTarget() const;
	virtual void	execute(Bureaucrat const& executor) const;
	struct noTarget : std::exception
	{
		const char* what() const throw()
		{
			return ("No target to execute.");
		}
	};

private:
	std::string target;

};

#endif
