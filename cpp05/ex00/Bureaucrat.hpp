/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:08:05 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/14 18:04:18 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdexcept>
#include <iostream>

class Bureaucrat{

private:
	const std::string	_name;
	int					_grade;

	Bureaucrat(); // default constructor
	Bureaucrat& operator = (const Bureaucrat& other); // copy assignment operator
	bool	is_ValidGrade(int grade);

	//Exceptions



public:
	Bureaucrat(const std::string name, int grade); // constructor
	~Bureaucrat(); // destructor
	Bureaucrat(const Bureaucrat& other); // copy constructor

	void	setGrade(int grade); //setter
	int		getGrade() const; // getter
	void	incrementGrade();
	void	decrementGrade();
	const std::string& getName() const;

	class GradeTooHighException : public std::exception{

		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception{

		public:
			const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& object);
/*
First, start with the smallest cog in this vast bureaucratic machine: the Bureaucrat.
A Bureaucrat must have:
• A constant name.
• A grade that ranges from 1 (highest possible grade) to 150 (lowest possible grade).
Any attempt to instantiate a Bureaucrat with an invalid grade must throw an exception:
either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException
*/
