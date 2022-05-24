/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:35:10 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/23 21:35:10 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	virtual void	makeSound() const;

protected:
	std::string		type;
};

#endif
