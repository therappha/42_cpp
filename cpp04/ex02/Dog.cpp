/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:51:30 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/13 16:51:31 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
	this->brain = new Brain;
	std::cout << "Dog was created sucessfully!" << std::endl;
	this->type = "Dog";
}

void Dog::makeSound() const
{
	std::cout << "You hear a Dog barking in the distance!" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "The dog ran away to chase the Dog!" << std::endl;
}

Dog& Dog::operator = (const Dog& other)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &other)
	{
		if (this->brain)
		{
			delete (this->brain);
		}
		this->brain = new Brain(*other.brain);
		this->type = other.type;
	}

	return (*this);
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	*this = other;
}

void Dog::setIdea(unsigned int index, const std::string& idea)
{
	if (index > 99)
		return ;
	if (!idea.empty())
		this->brain->ideas[index] = idea;
}
std::string Dog::getIdea(unsigned int index) const
{
	if (index < 100)
	{
		return this->brain->ideas[index];
	}
	return (this->brain->ideas[0]);
}
