/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:49:50 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/21 21:58:30 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>

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

bool ScalarConverter::isChar(const std::string& literal)
{
	try
	{
		if (literal.length() == 3 && literal.at(0) == '\'' && literal.at(2) == '\'')
			return (true);
		return (false);
	}
	catch(std::out_of_range& e)
	{
		return (false);
	}

}
bool ScalarConverter::isFloat(const std::string& literal)
{
	std::string	noF;
	std::string	remaining;
	char		lastchar;
	float		num = 0;

	if (literal.empty())
		return (false);
	lastchar = literal.at(literal.length() -1);
	if (lastchar != 'f' && lastchar != 'F')
	{
		return (false);
	}
	else
	{
		noF = literal.substr(0, literal.length() -1);
	}
	std::istringstream convertstream(noF);

	if (!(convertstream >> num))
		return (false);
	if (convertstream >> remaining)
		return (false);
	return (true);
}

bool ScalarConverter::isInt(const std::string& literal)
{
	std::string	remaining;
	int		num = 0;

	if (literal.empty())
		return (false);
	std::istringstream convertstream(literal);

	if (!(convertstream >> num))
		return (false);
	if (convertstream >> remaining)
		return (false);
	return (true);
}

bool ScalarConverter::isDouble(const std::string& literal)
{
	std::string	remaining;
	double		num = 0;

	if (literal.empty())
		return (false);
	std::istringstream convertstream(literal);

	if (!(convertstream >> num))
		return (false);
	if (convertstream >> remaining)
		return (false);
	return (true);
}

void ScalarConverter::convertChar(const std::string& literal)
{
	char mychar = literal.at(1);
	int myint = static_cast<int>(mychar);
	float myfloat = static_cast<float>(mychar);
	double mydouble = static_cast<float>(mydouble);


}

const std::string ScalarConverter::getType(const std::string& literal)
{
	bool (*types[4])(const std::string&) =
	{
		&ScalarConverter::isChar,
		&ScalarConverter::isFloat,
		&ScalarConverter::isInt,
		&ScalarConverter::isDouble
	};
	const std::string returntype[4] = {"char", "float", "int", "double"};

	for (int i = 0;  i < 4; i++)
	{
		if (types[i](literal))
		{
			return (returntype[i]);
		}
	}
	return ("impossible");
}
