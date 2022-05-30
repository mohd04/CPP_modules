/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:47:30 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/30 09:47:31 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5) {}
	PresidentialPardonForm(std::string targ);
	PresidentialPardonForm(const PresidentialPardonForm& cp);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm& cp);
	virtual void execute(Bureaucrat const & executo) const;
	std::string const & getTarget() const;
	struct noTarget : std::exception
	{
		const char* what() const throw()
		{
			return ("No target provided.");
		}
	};

private:
	std::string target;

};

#endif
