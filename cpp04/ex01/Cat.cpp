/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:51:30 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/29 14:44:15 by rafaelfe         ###   ########.fr       */
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
	std::cout << "You hear a Cat barking in the distance!" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "The Cat ran away to chase the Cat!" << std::endl;
}

Cat& Cat::operator = (const Cat& other)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &other)
	{
		delete (this->brain);
		this->brain = new Brain(*other.brain);
		this->type = other.type;
	}

	return (*this);
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	this->brain = new Brain(*other.brain);
	this->type = other.type;
}

void Cat::setIdea(unsigned int index, const std::string& idea)
{
	if (index > 99)
		return ;
	if (!idea.empty())
		this->brain->setIdea(index, idea);
}
std::string Cat::getIdea(unsigned int index) const
{
	if (index < 100)
	{
		return this->brain->getIdeas(index);
	}
	return (this->brain->getIdeas(0));
}
