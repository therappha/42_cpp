/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:17:57 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/06 21:26:58 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
	typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

	MutantStack<T>() : std::stack<T>() {}
	MutantStack<T>(const MutantStack<T>& other) : std::stack<T>(other) {}
	MutantStack<T>& operator =(const MutantStack<T>& rhs)
	{
		if (this != &rhs)
		{
			std::stack<T>::operator =(rhs);
		}
		return (*this);
	}
	~MutantStack<T>() {}

	typename std::deque<T>::iterator begin()
	{
		return (this->c.begin());
	}

	typename std::deque<T>::const_iterator begin() const
	{
		return (this->c.begin());
	}

	typename std::deque<T>::iterator end()
	{
		return (this->c.end());
	}

	typename std::deque<T>::const_iterator end() const
	{
		return (this->c.end());
	}

	typename std::deque<T>::reverse_iterator rbegin()
	{
		return (this->c.rbegin());
	}

	typename std::deque<T>::const_reverse_iterator rbegin() const
	{
		return (this->c.rbegin());
	}

	typename std::deque<T>::reverse_iterator rend()
	{
		return (this->c.rend());
	}
	typename std::deque<T>::const_reverse_iterator rend() const
	{
		return (this->c.rend());
	}
};


/*Write a MutantStack class. It will be implemented in terms of a std::stack.
It will offer all its member functions, plus an additional feature: iterators.*/
/*
Now, it’s time to move on to more serious things. Let’s develop something weird.

The std::stack container is very nice. Unfortunately, it is one of the only STL Containers that is NOT iterable. That’s too bad.
But why would we accept this? Especially if we can take the liberty of butchering the
original stack to create missing features.

To repair this injustice, you have to make the std::stack container iterable.
Write a MutantStack class. It will be implemented in terms of a std::stack.

It will offer all its member functions, plus an additional feature: iterators.
Of course, you will write and turn in your own tests to ensure everything works as

expected.*/

