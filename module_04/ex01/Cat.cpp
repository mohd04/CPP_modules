/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:35:19 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/23 21:35:20 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat& op) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*op.getBrain());
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat& Cat::operator=(const Cat& op)
{
	if (this != &op)
	{
		this->~Cat();
		this->brain = new Brain(*op.getBrain());
		this->Animal::operator=(op);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->type << " says meowww" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}
