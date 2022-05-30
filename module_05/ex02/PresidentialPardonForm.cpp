/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:47:21 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/30 09:47:22 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string targ) : Form("Presidential Pardon Form", 25, 5), target(targ)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy): Form(copy)
{
	this->target = copy.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& cp)
{
	this->Form::operator=(cp);
	this->target = cp.getTarget();
	return (*this);
}

std::string const & PresidentialPardonForm::getTarget() const {
	return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->target.empty())
		throw PresidentialPardonForm::noTarget();
	else if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
