/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:48:04 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/30 09:48:06 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "intern constructor called" << std::endl;
}

Intern::Intern(const Intern& cp)
{
	std::cout << "inter copy constructor called" << std::endl;
	*this = cp;
}

Intern& Intern::operator=(const Intern& op)
{
	(void)op;
	return (*this);
}

Intern::~Intern()
{

}

Form* Intern::makeShru(std::string form, std::string target)
{
	std::cout << "Intern writes " << form << std::endl;
	return (new ShrubberyCreationForm(target));
}

Form* Intern::makeRobo(std::string form, std::string target)
{
	std::cout << "Intern writes " << form << std::endl;
	return (new RobotomyRequestForm(target));
}
Form* Intern::makePres(std::string form, std::string target)
{
	std::cout << "Intern writes " << form << std::endl;
	return (new PresidentialPardonForm(target));
}

const char* Intern::NotKnownException::what() const throw() {
	return "Error: Wrong form asked.";
}

Form* Intern::makeForm(std::string form, std::string target)
{
	Form* funcForm = NULL;
	Form* (Intern::*funcFormArray[3])(std::string form, std::string target);
	funcFormArray[0] = &Intern::makeShru;
	funcFormArray[1] = &Intern::makeRobo;
	funcFormArray[2] = &Intern::makePres;
	(!form.compare("Shrubbery Creation Form") && (funcForm = (this->*(funcFormArray[0]))(form, target)));
	(!form.compare("Robotomy Request Form") && (funcForm = (this->*(funcFormArray[1]))(form, target)));
	(!form.compare("Presidential Pardon Form") && (funcForm = (this->*(funcFormArray[2]))(form, target)));
	if (funcForm == NULL)
		throw NotKnownException();
	return funcForm;
}
