/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:39:49 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/23 21:40:07 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	virtual void	makeSound() const = 0;

protected:
	std::string		type;
};

#endif
