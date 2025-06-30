/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:54:11 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/30 16:46:42 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>
#include <bits/stdc++.h>

template <typename T>
class Array {

private:

	T*				_elements;
	unsigned int	_size;

public:

	Array() : _elements(NULL), _size(0)
	{

	}
	Array(unsigned int n) : _size(n)
	{
		this->_elements = new T[n];

	}
	Array(const Array& rhs) : _size(rhs._size)
	{
		(*this) = rhs;
	}
	~Array()
	{
		if (this->_size > 0)
		{
			delete[] this->_elements;
		}
	}

	/*- ***************************** Operators ***************************** -*/

	Array& operator = (const Array& rhs)
	{
		this->_elements = new T[rhs._size];
		for (unsigned int i = 0; i < rhs._size; i++)
		{
			this->_elements[i] = rhs._elements[i]; // Maybe put NULL on end????? //
		}
		return (*this);
	}

	T& operator[](unsigned int i)
	{
		if (i < 0 || i >= _size)
		{
			throw std::out_of_range("Out of bounds access");
		}
		return (_elements[i]);
	}

	//methods
	unsigned int size() const
	{
		return (this->_size);
	}

};


