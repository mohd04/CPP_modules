#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <Form.hpp>
# include <stdlib.h>
# include <time.h>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string targ = "");
	virtual ~RobotomyRequestForm();
	virtual void	execAction(void) const;
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
