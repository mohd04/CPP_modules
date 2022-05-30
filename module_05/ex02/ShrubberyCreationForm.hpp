/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:47:41 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/30 09:47:42 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(): Form("Shrubbery Creation Form", 145, 137) {}
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& cp);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& cp);
	virtual ~ShrubberyCreationForm();
	virtual void	execute(Bureaucrat const& executor) const;
	struct noTarget : std::exception
	{
		const char* what() const throw()
		{
			return ("No target provided.");
		}
	};

private:
	std::string	target;

};

#endif
