/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:35:13 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/23 21:38:21 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Generating ideas..";
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& cp)
{
	*this = cp;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& op)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = op.ideas[i];
	return (*this);
}

void	Brain::generateIdea(int index, std::string idea)
{
	if (index > -1 && index < 101)
		this->ideas[index] = idea;
	else
		std::cout << "Index is invalid" << std::endl;
}

std::string const &Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}
