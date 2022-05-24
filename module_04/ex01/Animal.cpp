/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:35:03 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/23 21:35:04 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& cp)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = cp;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& op)
{
	if (this != &op)
		this->type = op.type;
	return (*this);
}

std::string	const &Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << this->type << " has no sound" << std::endl;
}
