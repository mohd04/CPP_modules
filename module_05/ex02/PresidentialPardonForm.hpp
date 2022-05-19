#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string targ);
	virtual ~PresidentialPardonForm();
	virtual void execAction(void) const;
	struct noTarget : std::exception
	{
		const char* what() const throw()
		{
			return ("No target provided.");
		}
	};

private:
	std::string target;

};

#endif
