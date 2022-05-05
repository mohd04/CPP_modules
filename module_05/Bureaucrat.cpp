#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name), grade(_grade)
{
	if (_grade > 0 && _grade <= 150)
	{
		if (!_name.empty())
		{

		}
}

Bureaucrat::~Bureaucrat()
{

}
