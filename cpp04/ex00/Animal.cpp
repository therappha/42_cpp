/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:55:06 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/12 22:02:17 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Object Animal was created!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "The animal sensed something an ran away!" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "you heard a sound of an animal coming from the wild!" << std::endl;
}
Animal& Animal::operator = (const Animal& other)
{
	this->type = other.type;
	return (*this);
}
