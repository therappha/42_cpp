/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:15:32 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/12 22:28:23 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* ----------------------- Constructors ---------------------------*/

//Default Constructor
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Default Target")
{

}
//Default Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{

}
//Constructor
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	if (_target.empty())
	{
		throw std::logic_error("Target cannot be empty!");
	}

}
//Copy Constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), _target(other.getTarget())
{

}

/* ----------------------- Methods ---------------------------*/

void		PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getGradeToExecute())
	{
		throw GradeTooLowException();
	}
	else if (!this->getSigned())
	{
		throw FormNotSignedException();
	}
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;


}
const std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

/* ----------------------- Operators ---------------------------*/
PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}
