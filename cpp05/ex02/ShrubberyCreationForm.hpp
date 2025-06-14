/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:10:21 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/14 18:12:50 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>


class ShrubberyCreationForm : public AForm {

private:
	ShrubberyCreationForm& operator = (const ShrubberyCreationForm& other); // Copy assigment operator
	const std::string	_target;

public:
	//Constructors and Destructors
	ShrubberyCreationForm(); // Default Constructor
	ShrubberyCreationForm(const std::string target); // Constructor
	ShrubberyCreationForm(const ShrubberyCreationForm& other); // Copy constructor
	~ShrubberyCreationForm(); // Destructor

	// Methods
	void		execute(const Bureaucrat& bureaucrat) const;
	const std::string& getTarget(void) const;

};


/*
•ShrubberyCreationForm: Required grades: sign 145, exec 137
Creates a file <target>_shrubbery in the working directory and writes ASCII trees
inside it.
*/
