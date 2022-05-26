#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string targ) : Form("Shrubbery Creation Form", 145, 137), target(targ)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (this->target.empty())
		throw ShrubberyCreationForm::noTarget();
	else if (executor.getGrade() > this->getExecGrade())
		throw tooLowException();
	else
	{
		std::string		name;
		std::ofstream	output;

		name = this->target;
		name += "_shrubbery";
		output.open(name.c_str(), std::fstream::trunc|std::fstream::out);
		if (!output.is_open())
			std::cout << "error: creating file" << name << std::endl;
		output << "       _-_" << std::endl;
		output << "    /~~   ~~\\" << std::endl;
		output << " /~~      __ ~~\\" << std::endl;
		output << "{     -         }" << std::endl;
		output << " \\  _-     -_  /" << std::endl;
		output << "   ~  \\\\ //  ~" << std::endl;
		output << "_- -   | |    _" << std::endl;
		output << "   -_  | |   -_" << std::endl;
		output << "      // \\\\" << std::endl;
		output.close();
	}
}
