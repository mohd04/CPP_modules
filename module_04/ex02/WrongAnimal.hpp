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

	std::string	const& getType() const;
	virtual void	makeSound() const = 0;

protected:
	std::string		type;
};

#endif
