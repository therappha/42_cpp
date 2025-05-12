/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:27:40 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/12 22:02:59 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:27:36 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/12 21:38:04 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog was created sucessfully!" << std::endl;
	this->type = "Dog";
}

void Dog::makeSound() const
{
	std::cout << "You hear a Dog barking in the distance!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "The dog ran away to chase the cat!" << std::endl;
}

Dog& Dog::operator = (const Dog& other)
{
	this->type = other.type;
	return (*this);
}

Dog::Dog(const Dog& other)
{
	*this = other;
}
