/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:54:11 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/05 19:25:31 by rafaelfe         ###   ########.fr       */
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
		this->_elements = new T[0];
	}
	Array(unsigned int n) : _size(n)
	{
		this->_elements = new T[n];

	}
	Array(const Array& rhs) : _size(rhs._size)
	{
		this->_elements = NULL;
		if (rhs._size > 0)
		{
			this->_elements = new T[rhs._size];
			for (unsigned int i = 0; i < rhs._size; i++)
			{
				this->_elements[i] = rhs._elements[i]; // Maybe put NULL on end????? //
			}
		}

	}
	~Array()
	{
		delete[] this->_elements;
	}

	/*- ***************************** Operators ***************************** -*/

	Array& operator = (const Array& rhs)
	{
		if (this == &rhs)
		{
			return (*this);
		}
		delete[] this->_elements;
		this->_elements = new T[rhs._size];
		this->_size = rhs._size;
		for (unsigned int i = 0; i < rhs._size; i++)
		{
			this->_elements[i] = rhs._elements[i]; // Maybe put NULL on end????? //
		}
		return (*this);
	}

	T& operator[](size_t i)
	{
		if (i >= _size)
		{
			throw std::out_of_range("Out of bounds access");
		}
		return (_elements[i]);
	}

	const	T& operator[](size_t i) const
	{
		if (i >= _size)
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


