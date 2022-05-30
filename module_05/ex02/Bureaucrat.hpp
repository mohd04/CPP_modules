/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:47:05 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/30 09:47:06 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& cp);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& op);

	void		signForm(Form& form);
	void		executeForm(Form& form);
	std::string const &	getName(void) const;
	int			getGrade(void) const;
	void		incrementGrade(const int amount);
	void		decrementGrade(const int amount);

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

private:
	int			grade;
	std::string	name;
	Bureaucrat();

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& cl);

#endif
