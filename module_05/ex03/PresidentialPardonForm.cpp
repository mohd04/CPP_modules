#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string targ) : Form("Presidential Pardon Form", 25, 5), target(targ)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execAction(void) const
{
	if (this->target.empty())
		throw PresidentialPardonForm::noTarget();
	else
		std::cout << "The President pardons " << this->target << "..." << std::endl;
}
