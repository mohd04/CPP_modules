/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:46:48 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/30 09:46:49 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
public:
	Form();
	Form(std::string _name, int sgrade, int egrade);
	Form(const Form& cp);
	~Form();

	Form& operator=(const Form& op);
	std::string		getName(void) const;
	int				getExecGrade(void) const;
	int				getSigningGrade(void) const;
	void			beSigned(Bureaucrat& agent);
	bool			isSigned(void) const;

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
	std::string const	_name;
	bool				_isSigned;
	const int			_execGrade;
	const int			_signingGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& cl);

#endif
