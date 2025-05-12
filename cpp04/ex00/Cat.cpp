/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:27:36 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/12 21:50:09 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat was created sucessfully!" << std::endl;
	this->type = "Cat";
}

void Cat::makeSound() const
{
	std::cout << "You hear a cat meowing behind you!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Oh no someone threw a stick in the cat and scared it away!" << std::endl;
}

Cat& Cat::operator = (const Cat& other)
{
	this->type = other.type;
	return (*this);
}

Cat::Cat(const Cat& other)
{
	*this = other;
}
