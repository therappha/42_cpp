/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:12:31 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/14 18:03:53 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ----------------------- Constructors ---------------------------*/

//Default constructor
Bureaucrat::Bureaucrat() : _name("Default Bureaucrat"), _grade(1)
{

}

//Default destructor
Bureaucrat::~Bureaucrat()
{

}
//Constructor
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	setGrade(grade);
	if (name.empty())
	{
		throw std::invalid_argument("What do you mean you don't have a name?\nName must not be empty!");
	}
}

//Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other.getName()), _grade(other.getGrade())
{

}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	setGrade(other.getGrade());
	return (*this);
}


/* ----------------------- Methods ---------------------------*/

void Bureaucrat::setGrade(int grade)
{
	if (is_ValidGrade(grade))
	{
		this->_grade = grade;
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
	{
		throw Bureaucrat::GradeTooLowException();
	}
}
int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

const std::string& Bureaucrat::getName() const
{
	return (this->_name);
}

bool Bureaucrat::is_ValidGrade(int grade)
{
	return (grade > 0 && grade < 151);
}

/*Increment the Bureaucrat grade by one, throws an exception if the grade goes out of range (1 to 150)*/
void	Bureaucrat::incrementGrade()
{
	setGrade(this->_grade - 1);
}
/*Decrement the Bureaucrat grade by one, throws an exception if the grade goes out of range (1 to 150)*/
void	Bureaucrat::decrementGrade()
{
	setGrade(this->_grade + 1);
}


/* ----------------------- Exception Methods ---------------------------*/

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!");
}
const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High!");
}

/*You must implement an overload of the insertion («) operator to print output in the
following format (without the angle brackets):
<name>, bureaucrat grade <grade>.
As usual, submit some tests to prove that everything works as expected.*/
std::ostream& operator<<(std::ostream& out, const Bureaucrat& object)
{
	out << object.getName() << ", bureaucrat grade " << object.getGrade() << ".";
	return (out);
}
