/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 17:15:28 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/13 17:47:25 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

class Intern{

private:
	Intern(const Intern& other);
	Intern& operator=(const Intern& other);

public:
	Intern();
	~Intern();

	AForm* makeForm(const std::string form, const std::string target);

	class FormNotFoundException : public std::exception{
		const char* what() const throw();
	};
};
