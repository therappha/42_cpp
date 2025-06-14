/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:49:50 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/14 20:20:46 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

} //Default Constructor
ScalarConverter::~ScalarConverter()
{

} // Destructor
ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	(void)other;
} // Copy Constructor
ScalarConverter& ScalarConverter::operator = (const ScalarConverter& other)
{
	(void)other;
	return (*this);
} //Copy Assignment Operator

void ScalarConverter::convert(const std::string& num)
{
	std::cout << num << std::endl;
}
