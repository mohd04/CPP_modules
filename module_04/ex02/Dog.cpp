#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog& op) : Animal(op)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*op.getBrain());
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog& Dog::operator=(const Dog& op)
{
	if (this != &op)
	{
		this->~Dog();
		this->brain = new Brain(*op.getBrain());
		this->Animal::operator=(op);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << this->type << " says woof?" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}
