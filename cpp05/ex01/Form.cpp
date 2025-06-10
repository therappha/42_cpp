/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:24:20 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/10 22:21:23 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* ----------------------- Constructors and Destructors ---------------------------*/

//Default Constructor
Form::Form() : _name("Default"), _to_execute(75), _to_sign(75), _signed(false)
{

}
//Default Destructor
Form::~Form()
{

}
//Constructor
Form::Form(const std::string name, int grade_to_sign, int grade_to_execute, bool is_signed) :
	_name(name), _to_sign(grade_to_sign), _to_execute(grade_to_execute), _signed(is_signed)
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
		throw std::invalid_argument("What this form for?\nName must not be empty!");
	}
}
//Copy Constructor
Form::Form(const Form& other) : _name(other._name), _to_sign(other._to_sign), _to_execute(other._to_execute), _signed(other._signed)
{

}

/* ----------------------- Methods ---------------------------*/

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
	{
		throw GradeTooLowException();
	}
	else if (this->_signed)
	{
		throw std::logic_error("The form was already signed!");
	}
	else
	{
		this->_signed = true;
	}
}
const std::string Form::getName(void) const
{
	return (this->_name);
}
const bool		Form::getSigned(void) const
{
	return (this->_signed);
}
const int		Form::getGradeToSign(void) const
{
	return (this->_to_sign);
}
const int		Form::getGradeToExecute(void) const
{
	return (this->_to_execute);
}

/* ----------------------- Overload Operators ---------------------------*/

//Insertion operator
std::ostream& operator<<(std::ostream& out, const Form& object)
{
	// out << form data;
}

//Copy assigment operator
Form& Form::operator = (const Form& other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	return (*this);
}


/* ----------------------- Exceptions ---------------------------*/

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low!");
}
const char*	Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high!");
}
