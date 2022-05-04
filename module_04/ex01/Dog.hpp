#ifndef DOG_HPP
#define DOG_HPP

#pragma once
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& cp);
	virtual ~Dog();
	Dog& operator=(const Dog& op);

	virtual void	makeSound() const;
};

#endif
