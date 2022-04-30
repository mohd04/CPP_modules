#include <iostream>
#include <string>

int main(void)
{
	std::string	hi;
	std::string	*stringPTR;

	hi = "HI THIS IS BRAIN";
	stringPTR = &hi;
	std::string	&stringREF = hi;

	std::cout << "Address of hi string is " << &hi << std::endl;
	std::cout << "Address of stringPTR is " << &stringPTR << std::endl;
	std::cout << "Address of stringREF is " << &stringREF << std::endl;

	std::cout << "Value of hi - " << hi << std::endl;
	std::cout << "Value of stringPTR - " << *stringPTR << std::endl;
	std::cout << "Value of stringREF - " << stringREF << std::endl;
}
