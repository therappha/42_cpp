/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 17:20:09 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/14 16:30:42 by rafaelfe         ###   ########.fr       */
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
	(void)other;
}
Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

const char* Intern::FormNotFoundException::what() const throw()
{
	return ("The form you requested does not exist!");
}

AForm*	Intern::makePresidentialPardon(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeRobotomyRequest(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::makeShrubberryCreationForm(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm(const std::string form, const std::string target)
{
	const	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubberry creation"};

	AForm* (Intern::* create_form[3])(const std::string) =
	{
		&Intern::makePresidentialPardon,
		&Intern::makeRobotomyRequest,
		&Intern::makeShrubberryCreationForm
	};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == form)
		{

			std::cout << "Intern creates " << form << std::endl;
			return (this->* create_form[i])(target);
		}
	}
	throw FormNotFoundException();
}
