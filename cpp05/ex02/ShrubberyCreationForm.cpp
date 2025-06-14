/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:15:32 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/14 18:12:55 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>

/* ----------------------- Constructors ---------------------------*/

//Default Constructor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default Target")
{

}
//Default Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
//Constructor
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	if (_target.empty())
	{
		throw std::logic_error("Target cannot be empty!");
	}
}
//Copy Constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other.getTarget())
{

}

/* ----------------------- Methods ---------------------------*/

void		ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getGradeToExecute())
	{
		throw GradeTooLowException();
	}
	else if (!this->getSigned())
	{
		throw FormNotSignedException();
	}
	std::ofstream tree_file;
	std::string tree_name = this->getTarget() + "_target";
	tree_file.open(tree_name.c_str());
	if (tree_file.fail())
	{
		std::cout << "Could not open file " << this->getTarget() << "_target" << std::endl;
	}
	tree_file <<
		"       ###\n"
		"      #o###\n"
		"    #####o###\n"
		"   #o#\\#|#/###\n"
		"    ###\\|/#o#\n"
		"     # }|{  #\n"
		"rafa   }|{\n";

}
const std::string& ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

/* ----------------------- Operators ---------------------------*/
ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}
