#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& op) : Animal()
{
	*this = op;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& op)
{
	if (this != &op)
		this->type = op.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << this->type << " says meowww" << std::endl;
}
