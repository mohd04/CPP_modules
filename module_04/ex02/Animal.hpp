/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:39:22 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/24 20:04:41 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>

class Animal
{
public:
	Animal();
	Animal(const Animal& cp);
	virtual ~Animal();

	Animal& operator=(const Animal& cp);

	std::string const &getType() const;
	virtual void	makeSound() const = 0;

protected:
	std::string		type;
};

#endif
