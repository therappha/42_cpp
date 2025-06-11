/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:24:22 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/11 19:13:43 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class	Form{

private:
	const std::string	_name;
	const int			_to_sign;
	const int			_to_execute;
	bool				_signed;

	Form& operator = (const Form& other); // Copy assignment operator

public:
	Form(); // Default Constructor
	Form(const std::string name, int grade_to_sign, int grade_to_execute);
	~Form(); // Default Destructor
	Form(const Form& other); //Copy Constructor

	//Getters and Setters
	const std::string	getName(void) const;
	bool				getSigned(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExecute(void) const;

	//Methods
	void				beSigned(const Bureaucrat& bureaucrat);

	//Exceptions
	class GradeTooHighException : public std::exception{ // << must be public or else catch(std::exception &e) does not catch it

		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception{

		public:
			const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream& out, const Form& object); //Overload insertion operator
