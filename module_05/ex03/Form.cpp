#include "Form.hpp"

Form::Form(std::string name, int sgrade, int egrade) : _name(name), _isSigned(false), _execGrade(egrade), _signingGrade(sgrade)
{
	std::cout << "Form Constructor called" << std::endl;
	if (egrade > 0 && egrade < 151 && sgrade > 0 && sgrade < 151)
		std::cout << "Form " << this->_name << " with signing grade " << this->_signingGrade << std:: endl;
	else if (egrade > 150 || sgrade > 150)
		throw Form::GradeTooLowException();
	else
		throw Form::GradeTooHighException();
}

Form::Form(const Form& cp): _name(cp._name), _isSigned(false), _execGrade(cp._execGrade), _signingGrade(cp._signingGrade)
{
	std::cout << "Form Copy constructor called" << std::endl;
	*this = cp;
	std::cout << "Copied Form " << this->_name << " with signing grade " << this->_signingGrade << std:: endl;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

Form&	Form::operator=(const Form& op)
{
	if (this != &op)
		this->_isSigned = op._isSigned;
	return (*this);
}

int	Form::getSigningGrade(void) const
{
	return (this->_signingGrade);
}

int	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool	Form::isSigned(void) const
{
	return (_isSigned);
}

void	Form::beSigned(Bureaucrat& agent)
{
	if (agent.getGrade() <= this->_signingGrade)
		this->_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Error: The grade is too high.");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Error: The grade is too low.");
}

std::ostream&	operator<<(std::ostream &os, const Form& op)
{
	os << "Form " << op.getName() << ", form of signing grade " << op.getSigningGrade()
		<< " and of execution grade " << op.getExecGrade();
	if (op.isSigned())
		os << ", is signed." << std::endl;
	else
		os << ", is not signed." << std::endl;
	return (os);
}
