/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:59:06 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/25 20:18:53 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(const std::string& name, const uint32_t age) : _name(name), _age(age)
{
	if (name.empty())
	{
		throw (std::invalid_argument("you cannot make data without a name!"));
	}
}
Data::Data() :_name("default"), _age(25)
{

}
Data::~Data()
{

}
Data& Data::operator= (const Data& other)
{
	(void)other;
	return (*this);
}
Data::Data(const Data& other) : _name(other._name), _age(other._age)
{

}
const std::string& Data::getName(void) const
{
	return (this->_name);
}

uint32_t Data::getAge(void) const
{
	return (this->_age);
}
