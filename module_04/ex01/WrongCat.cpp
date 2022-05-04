#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& op) : WrongAnimal()
{
	*this = op;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& op)
{
	if (this != &op)
		this->type = op.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << this->type << " says meowww" << std::endl;
}
