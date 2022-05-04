#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#pragma once
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& cp);
	virtual ~WrongCat();
	WrongCat& operator=(const WrongCat& op);

	virtual void	makeSound() const;
};

#endif
