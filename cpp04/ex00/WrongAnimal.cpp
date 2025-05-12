/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:55:06 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/12 21:48:34 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "Abomination WrongAnimal was created!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Abomination WrongAnimal was destroyed!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "you heard a strange sound of an Animal coming from underground!" << std::endl;
}
WrongAnimal& WrongAnimal::operator = (const WrongAnimal& other)
{
	this->type = other.type;
	return (*this);
}
