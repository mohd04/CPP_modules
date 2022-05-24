/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:39:35 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/23 21:39:35 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#pragma once
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& cp);
	virtual ~Dog();
	Dog& operator=(const Dog& op);

	virtual void	makeSound() const;
};

#endif
