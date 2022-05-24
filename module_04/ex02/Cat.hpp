/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:39:29 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/24 20:04:41 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& cp);
	virtual ~Cat();
	Cat& operator=(const Cat& op);

	virtual void	makeSound() const;
};

#endif
