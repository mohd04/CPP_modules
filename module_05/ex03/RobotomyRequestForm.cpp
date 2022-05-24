#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string targ) : Form("Robotomy Request Form", 72, 45), target(targ)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execAction(void) const
{
	if (this->target.empty())
		throw RobotomyRequestForm::noTarget();
	else
	{
		std::cout << "*drilling noises*" << std::endl;
		srand(time(NULL));
		if ((rand() % 2) == 1)
		{
			std::cout << "Robotomy failed." << std::endl;
			return ;
		}
		else
			std::cout << this->target << " succeded." << std::endl;
	}
}
