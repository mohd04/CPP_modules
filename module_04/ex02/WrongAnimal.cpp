#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cp)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = cp;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& op)
{
	if (this != &op)
		this->type = op.type;
	return (*this);
}

std::string	WrongAnimal::getType()
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << this->type << " has no sound" << std::endl;
}
