#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string targ) : Form("Robotomy Request Form", 72, 45), target(targ)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): Form(copy)
{
	this->target = copy.getTarget();
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	this->Form::operator=(copy);
	this->target = copy.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

std::string const & RobotomyRequestForm::getTarget() const
{
	return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const& agent) const
{
	if (this->target.empty())
		throw RobotomyRequestForm::noTarget();
	else if (agent.getGrade() > this->getExecGrade())
		throw tooLowException();

	std::cout << "*drilling noises*" << std::endl;
	if ((rand() % 2) == 1)
		std::cout << this->target << " has been robotomized successfully 50\% of the time." << std::endl;
	else
		std::cout << this->target << " has not been robotomized successfully 50\% of the time." << std::endl;

}