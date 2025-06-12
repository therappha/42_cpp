/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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
#include <stdint.h>

class Bureaucrat;

class	AForm{

private:
	const std::string	_name;
	const int			_to_sign;
	const int			_to_execute;
	bool				_signed;
	bool				_executed;

public:
	AForm(); // Default Constructor
	AForm(const std::string name, int grade_to_sign, int grade_to_execute);
	virtual~AForm(); // Default Destructor
	AForm(const AForm& other); //Copy Constructor

	//Getters and Setters
	const std::string	getName(void) const;
	bool				getSigned(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExecute(void) const;
	bool				getExecuted(void) const;
	void				setExecuted(void);

	//Methods
	void				beSigned(const Bureaucrat& bureaucrat);
	virtual void		execute(Bureaucrat const & executor) const = 0;

		AForm& operator = (const AForm& other); // Copy assignment operator

	//Exceptions
	class GradeTooHighException : public std::exception{ // << must be public or else catch(std::exception &e) does not catch it

		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception{

		public:
			const char* what() const throw();
	};

	class FormNotSignedException : public std::exception{

		public:
			const char* what() const throw();
	};

	class FormAlreadyExecutedException : public std::exception{

		public:
			const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream& out, const AForm& object); //Overload insertion operator
