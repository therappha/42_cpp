/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:15:32 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/14 18:13:02 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* ----------------------- Constructors ---------------------------*/

//Default Constructor
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default Target")
{

}
//Default Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{

}
//Constructor
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	if (_target.empty())
	{
		throw std::logic_error("Target cannot be empty!");
	}

}
//Copy Constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other.getTarget())
{

}

/* ----------------------- Methods ---------------------------*/

void		RobotomyRequestForm::execute(const Bureaucrat& bureaucrat) const
{
	int randvalue = std::rand() % 2;
	if (bureaucrat.getGrade() > this->getGradeToExecute())
	{
		throw GradeTooLowException();
	}
	else if (!this->getSigned())
	{
		throw FormNotSignedException();
	}
	std::cout << "You hear some drilling noises!" << std::endl;
	if (randvalue % 2 == 0)
	{
		std::cout << this->_target << " has been Robotomized!" << std::endl;
	}
	else
	{
		std::cout << "Robotomy failed!" << std::endl;
	}

}
const std::string& RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

/* ----------------------- Operators ---------------------------*/
RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}
