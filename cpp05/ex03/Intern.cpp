/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 17:20:09 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/13 17:50:03 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{

}
Intern::~Intern()
{

}
Intern::Intern(const Intern& other)
{

}
Intern& Intern::operator=(const Intern& other)
{

}

const char* Intern::FormNotFoundException::what() const throw()
{
	return ("The form you requested does not exist!");
}

AForm* Intern::makeForm(const std::string form, const std::string target)
{
	AForm*	newform;
	const	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubberry creation"};
	bool	found;

	switch(form)
	{
		case "presidential pardon request":
			newform = new PresidentialPardonRequestForm(target);
		case "robotomy request":
			newform = new RobotomyRequestForm(target);
		case "shrubberry request":
			newform = new ShrubberyCreationForm(target);
		default:
			throw FormNotFoundExeception;
	}
	std::cout << "Intern creates " << form << std::endl;
}
