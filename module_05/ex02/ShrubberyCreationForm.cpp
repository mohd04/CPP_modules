#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string targ) : Form("Shrubbery Creation Form", 145, 137), target(targ)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(void) const
{
	if (this->target.empty())
		throw ShrubberyCreationForm::noTarget();
	else
	{
		std::string		file;
		std::string		name;
		std::ofstream	output;

		name = this->target;
		name += "shrubbery";
		output.open(name.c_str(), std::fstream::trunc|std::fstream::out);
		if (!output.is_open())
			std::cout << "error: creating file" << name << std::endl;
		file = "shreeeeberrrrryyyyyy";
		output << file;
		output.close();
	}
}
