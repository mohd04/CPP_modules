#ifndef CAT_HPP
#define CAT_HPP

#pragma once
# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& cp);
	virtual ~Cat();
	Cat& operator=(const Cat& op);

	virtual void	makeSound() const;
};

#endif
