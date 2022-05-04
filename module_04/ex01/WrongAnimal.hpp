#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#pragma once
#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& cp);
	virtual ~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal& cp);

	std::string		getType();
	virtual void	makeSound() const;

protected:
	std::string		type;
};

#endif
