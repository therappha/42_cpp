/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:49:50 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/22 19:27:24 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"
#include <sstream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <cstdlib>

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

void ScalarConverter::printChar(char c)
{
	if (std::isprint(c))
	{
		std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
	}
	else
	{
		std::cout << "Non displayable" << std::endl;
	}
}

bool ScalarConverter::isChar(const std::string& literal)
{
	try
	{
		if (literal.length() == 3 && literal.at(0) == '\'' && literal.at(2) == '\'')
			return (true);
		if (literal.length() == 1 && !std::isdigit(literal.at(0)))
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
	int			num = 0;

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
	{
		return (false);
	}
	if (convertstream >> remaining)
		return (false);
	return (true);
}

const std::string ScalarConverter::isPseudoNumber(const std::string& literal)
{
	const std::string pseudoconst[12] = {
		"nan",
		"-nan",
		"+nan",
		"nanf",
		"+nanf",
		"-nanf",
		"inf",
		"-inf",
		"+inf",
		"inff",
		"-inff",
		"+inff",
	};

	for (int i = 0; i < 12; i++)
	{
		if (literal == pseudoconst[i])
			return (pseudoconst[i]);
	}
	return ("impossible");
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

void ScalarConverter::printNum(double value)
{
	std::cout << "char: ";
	if (std::isnan(value) || std::isinf(value)
		|| value > std::numeric_limits<char>::max() || value < std::numeric_limits<char>::min())
	{
		std::cout << "Impossible" << std::endl;
	}
	else
	{
		printChar(static_cast<char>(value));
	}

	std::cout << "int: ";
	if (std::isnan(value) || std::isinf(value)
		|| value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
	{
		std::cout << "Impossible" << std::endl;
	}
	else
	{
		std::cout << static_cast<int>(value) << std::endl;
	}

	std::cout << "float: ";
	if ((!std::isnan(value) && !std::isinf(value)) && (value > std::numeric_limits<float>::max() || value < std::numeric_limits<float>::min()))
	{
		std::cout << "Impossible" << std::endl;
	}
	else if (std::isnan(value) || std::isinf(value))
	{
		std::cout << static_cast<double>(value) << "f" << std::endl;
	}
	else
	{
		std::cout << std::fixed << std::setprecision(1);
		std::cout << static_cast<float>(value) << "f" << std::endl;
	}

	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1);
	std::cout << (value) << std::endl;
}

void ScalarConverter::convert(const std::string& num)
{
	double	value = -1;
	std::string remaining;

	if (isChar(num))
	{
		if (num.length() == 1)
			value =  static_cast<double>(num.at(0));
		else
			value = static_cast<double>(num.at(1));
	}
	else if (getType(num) != "impossible")
	{
		std::istringstream parser(num);
		if (!(parser >> value))
		{
			throw std::runtime_error("could not parse this!");
			return ;
		}
		else if((parser >> remaining ) && ((remaining.length() > 1) && remaining.at(0) != 'f'))
		{
			throw std::runtime_error("could not parse this!");
			return ;
		}
	}
	else if (isPseudoNumber(num) != "impossible")
	{
		value = std::strtod(num.c_str(), NULL );
	}
	else
	{
		throw std::runtime_error("could not parse this!");
		return ;
	}

	printNum(value);

}

