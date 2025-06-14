/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:44:41 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/14 20:19:36 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ScalarConverter{

	private:

		ScalarConverter(); //Default Constructor
		~ScalarConverter(); // Destructor
		ScalarConverter(const ScalarConverter& other); // Copy Constructor
		ScalarConverter& operator = (const ScalarConverter& other); //Copy Assignment Operator

	public:

		static void convert(const std::string& num);

};

/*
Write a class ScalarConverter that will contain only one static method "convert"
that will take as a parameter a string representation of a C++ literal in its most common
form and output its value in the following series of scalar types:
• char
• int
• float
• double
As this class doesn’t need to store anything at all, it must not be instantiable by users.
Except for char parameters, only the decimal notation will be used.
Examples of char literals: ’c’, ’a’, ...
To make things simple, please note that non-displayable characters shouldn’t be used as
inputs. If a conversion to char is not displayable, print an informative message.
Examples of int literals: 0, -42, 42...
Examples of float literals: 0.0f, -4.2f, 4.2f...
You have to handle these pseudo-literals as well (you know, for science): -inff, +inff,
and nanf.
7
C++ - Module 06 C++ casts
Examples of double literals: 0.0, -4.2, 4.2...
You have to handle these pseudo-literals as well (you know, for fun): -inf, +inf, and
nan. */
