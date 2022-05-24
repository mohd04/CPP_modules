#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat& cp);
	virtual ~Cat();
	Cat& operator=(const Cat& op);

	virtual void	makeSound() const;
	Brain *getBrain() const;
};

#endif
