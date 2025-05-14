/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:30:02 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/13 20:45:32 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria& AMateria::operator = (const AMateria& other)
{
	this->type = other.getType();
}
AMateria::AMateria()
{
	std::cout << "Default Object AMateria created!"  << std::endl;
}
AMateria::~AMateria()
{
	std::cout << "Object AMateria destroyed!"  << std::endl;
}
AMateria::AMateria(const AMateria& other)
{
	this->type = other.getType();
}
AMateria::AMateria(std::string const & type)
{
	std::cout << "Object AMateria created with type " << type <<"!" << std::endl;
	this->type = type;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

