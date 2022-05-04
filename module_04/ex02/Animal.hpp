#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#pragma once
#include <iostream>

class Animal
{
public:
	Animal();
	Animal(const Animal& cp);
	virtual ~Animal();

	Animal& operator=(const Animal& cp);

	std::string const &getType() const;
	virtual void	makeSound() const = 0;

protected:
	std::string		type;
};

#endif
