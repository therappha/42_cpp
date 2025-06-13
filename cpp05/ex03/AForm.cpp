/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:24:20 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/11 19:23:07 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
/* ----------------------- Constructors and Destructors ---------------------------*/

//Default Constructor
AForm::AForm() : _name("Default"), _to_sign(75), _to_execute(75), _signed(false)
{

}
//Default Destructor
AForm::~AForm()
{

}
//Constructor
AForm::AForm(const std::string name, int grade_to_sign, int grade_to_execute) :
	_name(name), _to_sign(grade_to_sign), _to_execute(grade_to_execute), _signed(false)
{

	if (grade_to_sign < 1 || grade_to_execute < 1)
	{
		throw GradeTooHighException();
	}
	if (grade_to_sign > 150 || grade_to_execute > 150)
	{
		throw GradeTooLowException();
	}
	if (this->_name.empty())
	{
		throw std::invalid_argument("What this AForm for?\nName must not be empty!");
	}
}
//Copy Constructor
AForm::AForm(const AForm& other) : _name(other._name), _to_sign(other._to_sign), _to_execute(other._to_execute), _signed(other._signed)
{

}

/* ----------------------- Methods ---------------------------*/

void	AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw AForm::GradeTooLowException();
	}
	else if (this->getSigned())
	{
		throw FormNotSignedException();
	}
	std::cout << "target" << " was executed! (oh no!)\n" << std::endl;
}


void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
	{
		throw AForm::GradeTooLowException();
	}
	else if (this->_signed)
	{
		throw std::logic_error("the AForm was already signed!");
	}
	else
	{
		this->_signed = true;
	}
}
const std::string AForm::getName(void) const
{
	return (this->_name);
}
bool		AForm::getSigned(void) const
{
	return (this->_signed);
}

int		AForm::getGradeToSign(void) const
{
	return (this->_to_sign);
}
int		AForm::getGradeToExecute(void) const
{
	return (this->_to_execute);
}


/* ----------------------- Overload Operators ---------------------------*/

//Insertion operator
std::ostream& operator<<(std::ostream& out, const AForm& object)
{
	out << object.getName();
	if (object.getSigned())
	{
		out << " is already signed, ";
	}
	else
	{
		out << " is not signed yet, ";
	}
	out << "it requires a grade of: '" << object.getGradeToSign() << "' to sign ";
	out << "and a grade of: '" << object.getGradeToExecute() << "' to execute it.";
	return (out);
}

//Copy assigment operator
AForm& AForm::operator = (const AForm& other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	return (*this);
}

/* ----------------------- Exceptions ---------------------------*/

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Form: grade is too low!");
}
const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Form: grade is too high!");
}

const char*	AForm::FormNotSignedException::what() const throw()
{
	return ("Form: Form needs to be signed to be executed!");
}

