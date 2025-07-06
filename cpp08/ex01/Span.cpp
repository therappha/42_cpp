/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:01:42 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/06 18:10:30 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()  : _maxsize(0)
{
	std::cout << "Cannot do it!" << std::endl;
}

Span::Span(unsigned int n) : _maxsize(n)
{

}

Span::Span(const Span& rhs) : _maxsize(rhs._maxsize)
{
	this->_values = rhs._values;
}
Span& Span::operator = (const Span& other)
{
	if (this != &other)
	{
		this->_values = other._values;
		this->_maxsize = other._maxsize;
	}
	return (*this);
}
Span::~Span()
{

}

void	Span::addNumber(int number)
{
	if (this->_values.size() == this->_maxsize )
	{
		throw (std::out_of_range("cannot add more numbers, it has already reached max capacity"));
	}
	else
	{
		this->_values.push_back(number);
	}
}

void				Span::addNumber(int* begin, int* end)
{
	if (!begin || !end)
	{
		throw std::invalid_argument("cannot add a nullptr");
	}
	std::vector<int> newarray(begin, end);
	if (newarray.size() + this->_values.size() > this->_maxsize)
	{
		throw (std::out_of_range("cannot add more numbers, it has already reached max capacity"));
	}
	this->_values.insert(this->_values.end(), newarray.begin(), newarray.end());
}

unsigned int Span::shortestSpan()
{
	unsigned int current_min;
	unsigned int min;

	if (this->_values.size() < 2)
	{
		throw (std::logic_error("Not enough values"));
	}

	std::vector<int>sorted = this->_values;
	std::sort(sorted.begin(), sorted.end());

	min = static_cast<unsigned int>(sorted[1]) - sorted[0];

	for (size_t i = 2; i < sorted.size(); i++)
	{
		current_min = static_cast<unsigned int>(sorted[i]) - sorted[i - 1];
		if (current_min < min)
		{
			min = current_min;
		}
	}
	return (min);
}
unsigned int Span::longestSpan()
{
	if (this->_values.size() < 2)
	{
		throw (std::logic_error("Not enough values"));
	}
	
	int min = *std::min_element(this->_values.begin(), this->_values.end());
	int max = *std::max_element(this->_values.begin(), this->_values.end());

	return (static_cast<unsigned int>(max) - min);
}
