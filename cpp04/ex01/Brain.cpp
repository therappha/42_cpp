/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:26:22 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/13 17:12:30 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructed!" << std::endl;
}

Brain& Brain::operator = (const Brain& other)
{
	std::cout << "Brain copy assigment operator called" << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "someone got his brain fried!" << std::endl;
}
const std::string Brain::getIdeas(unsigned int i)
{
	if (i < 100)
	{
		return this->ideas[i];
	}
	return this->ideas[0];
}
void Brain::setIdea(unsigned int index, const std::string& idea)
{
	if (index < 100)
		this->ideas[index] = idea;
}
