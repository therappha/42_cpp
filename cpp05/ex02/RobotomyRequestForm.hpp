/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:10:21 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/12 22:11:55 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public AForm {

private:
	RobotomyRequestForm& operator = (const RobotomyRequestForm& other); // Copy assigment operator
	const std::string _target;

public:
	//Constructors and Destructors
	RobotomyRequestForm(); // Default Constructor
	RobotomyRequestForm(const std::string target); // Constructor
	RobotomyRequestForm(const RobotomyRequestForm& other); // Copy constructor
	~RobotomyRequestForm(); // Destructor


	// Methods
	void				execute(const Bureaucrat& bureaucrat) const;
	const std::string	getTarget(void) const;




};


/*
•RobotomyRequestForm: Required grades: sign 145, exec 137
Creates a file <target>_shrubbery in the working directory and writes ASCII trees
inside it.
*/
