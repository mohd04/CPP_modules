#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& op) : Animal()
{
	*this = op;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& op)
{
	if (this != &op)
		this->type = op.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->type << " says meowww" << std::endl;
}
