/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:35:27 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/24 20:04:41 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP


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
