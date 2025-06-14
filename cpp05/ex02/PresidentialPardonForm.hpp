/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:10:21 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/14 18:12:43 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

class PresidentialPardonForm : public AForm {

private:
	PresidentialPardonForm& operator = (const PresidentialPardonForm& other); // Copy assigment operator
	const std::string _target;

public:
	//Constructors and Destructors
	PresidentialPardonForm(); // Default Constructor
	PresidentialPardonForm(const std::string target); // Constructor
	PresidentialPardonForm(const PresidentialPardonForm& other); // Copy constructor
	~PresidentialPardonForm(); // Destructor


	// Methods
	void				execute(const Bureaucrat& bureaucrat) const;
	const std::string&	getTarget(void) const;




};


/*
•PresidentialPardonForm: Required grades: sign 145, exec 137
Creates a file <target>_shrubbery in the working directory and writes ASCII trees
inside it.
*/
