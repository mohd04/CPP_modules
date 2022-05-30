/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:45:15 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/30 09:45:17 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	int			grade;
	std::string	name;
	Bureaucrat();
public:
	Bureaucrat(std::string _name, int _grade);
	Bureaucrat(const Bureaucrat& cp);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& op);

	std::string	const& getName(void) const;
	int			getGrade(void) const;
	void		incrementGrade(const int amount);
	void		decrementGrade(const int amount);

public:
	class GradeTooHighException: public std::exception
	{
	public:
		GradeTooHighException() {}
		virtual ~GradeTooHighException() throw() {}
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
	public:
		GradeTooLowException() {}
		virtual ~GradeTooLowException() throw() {}
		virtual const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& cl);

#endif
