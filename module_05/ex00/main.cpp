/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:46:25 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/30 09:46:25 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat* setInfo(std::string name, int grade) {
	try
	{
		return new Bureaucrat(name, grade);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return NULL;
	}
}

int main() {
	Bureaucrat* low = setInfo("low", -1);
	Bureaucrat* high = setInfo("high", 200);
	Bureaucrat* Yash = setInfo("Yash", 5);
	Bureaucrat* Pavan = setInfo("Pavan", 148);
	Bureaucrat me(*Yash);

	delete low;
	delete high;

	std::cout << "------------------------" << std::endl;
	try
	{
		me.incrementGrade(2);
		std::cout << me << std::endl;
		me.incrementGrade(2);
		std::cout << me << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << me << std::endl;
	std::cout << "------------------------" << std::endl;
	try
	{
		Pavan->decrementGrade(2);
		std::cout << *Pavan << std::endl;
		Pavan->incrementGrade(6);
		std::cout << *Pavan << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *Pavan << std::endl;

	delete Yash;
	delete Pavan;

	return 0;
}
