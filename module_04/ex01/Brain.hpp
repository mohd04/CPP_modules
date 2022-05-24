/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:35:15 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/24 20:04:41 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>

class Brain
{
public:
	Brain();
	Brain(Brain const &cp);
	~Brain();

	Brain& operator=(Brain const &op);

	void		generateIdea(int index, std::string idea);
	std::string const &getIdea(int index) const;

private:
	std::string	ideas[100];
};

#endif
