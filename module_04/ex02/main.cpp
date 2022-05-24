/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:39:39 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/23 21:39:39 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal *Animal[6];
	for (int i = 0; i < 6; ++i)
	{
		if (i % 2 == 0)
			Animal[i] = new Cat();
		else
			Animal[i] = new Dog();
		Animal[i]->makeSound();
	}
	for (int i = 0; i < 6; ++i)
	{
		delete Animal[i];
	}
	Dog Dalmatian;
	Dog Perdita = Dalmatian;
	for (int i = 0; i < 50; ++i)
	{
		Dalmatian.getBrain()->generateIdea(i, "Fight cruella\n");
		Perdita.getBrain()->generateIdea(i, "Eat Cruela\n");
	}
	std::cout << Dalmatian.getBrain()->getIdea(3);
	std::cout << Perdita.getBrain()->getIdea(3);
}
