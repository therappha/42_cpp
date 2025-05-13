/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:32:30 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/13 16:35:26 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain;
	std::cout << "Cat was created sucessfully!" << std::endl;
	this->type = "Cat";
}

void Cat::makeSound() const
{
	std::cout << "You hear a Cat mewoing below you!" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "The Cat ran away scared of the dog!" << std::endl;
}

Cat& Cat::operator = (const Cat& other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
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

Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor called" << std::endl;

	*this = other;
}

void Cat::setIdea(unsigned int index, const std::string& idea)
{
	if (index > 99)
		return ;
	if (!idea.empty())
		this->brain->ideas[index] = idea;
}
std::string Cat::getIdea(unsigned int index) const
{
	if (index < 100)
	{
		return this->brain->ideas[index];
	}
	return (this->brain->ideas[0]);
}
