/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 21:57:02 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/05 14:20:49 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

class Span {

private:
	Span();
	unsigned int	_maxsize;
	std::vector<int> _values;

public:
	Span(unsigned int n);
	Span(const Span& rhs);
	Span& operator = (const Span& other);
	~Span();

	void				addNumber(int number);
	void				addNumber(int* begin, int* end);

	unsigned int		shortestSpan();
	unsigned int		longestSpan();
};

/* Develop a Span class that can store a maximum of N integers. N is an unsigned int
variable and will be the only parameter passed to the constructor.

This class will have a member function called addNumber() to add a single number
to the Span. It will be used in order to fill it. Any attempt to add a new element if there
are already N elements stored should throw an exception.

Next, implement two member functions: shortestSpan() and longestSpan()
They will respectively find out the shortest span or the longest span (or distance, if
you prefer) between all the numbers stored, and return it. If there are no numbers stored,
or only one, no span can be found. Thus, throw an exception.

Of course, you will write your own tests, and they will be far more thorough than the
ones below. Test your Span with at least 10,000 numbers. More would be even better.

Last but not least, it would be wonderful to fill your Span using a range of iterators.
Making thousands of calls to addNumber() is so annoying. Implement a member function
to add multiple numbers to your Span in a single call.

 */
