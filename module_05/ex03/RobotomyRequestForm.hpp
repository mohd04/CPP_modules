/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:48:23 by mpatel            #+#    #+#             */
/*   Updated: 2022/05/30 09:48:23 by mpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(): Form("Robotomy Request Form", 72, 49) {}
	RobotomyRequestForm(std::string targ);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm& cp);
	std::string const & getTarget() const;
	virtual void	execute(Bureaucrat const& executor) const;
	struct noTarget : std::exception
	{
		const char* what() const throw()
		{
			return ("No target to execute.");
		}
	};

private:
	std::string target;

};

#endif
