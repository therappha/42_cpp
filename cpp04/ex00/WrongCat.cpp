/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:27:36 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/12 21:50:09 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat was created sucessfully!" << std::endl;
	this->type = "WrongCat";
}

void WrongCat::makeSound() const
{
	std::cout << "You hear a WrongCat meowing behind you!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Oh no someone threw a stick in the WrongCat and scared it away!" << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat& other)
{
	this->type = other.type;
	return (*this);
}

WrongCat::WrongCat(const WrongCat& other)
{
	*this = other;
}
