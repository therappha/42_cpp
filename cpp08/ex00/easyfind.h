/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:34:55 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/06 18:54:58 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyFind(T &array, int tofind)
{
	typename T::iterator it = std::find(array.begin(), array.end(), tofind);
	if (it == array.end())
	{
		throw std::logic_error("No objects with the passed value!");
	}
	return it;
}
template <typename T>
typename T::const_iterator easyFind(const T &array, int tofind)
{
	typename T::const_iterator it = std::find(array.begin(), array.end(), tofind);
	if (it == array.end())
	{
		throw std::logic_error("No objects with the passed value!");
	}
	return it;
}


/*A first easy exercise is the way to start off on the right foot.
Write a function template easyfind that accepts a type T.
It takes two parameters:
the first one is of type T, and the second one is an integer.

Assuming T is a container of integers, this function has to find the first occurrence
of the second parameter in the first parameter.
If no occurrence is found, you can either throw an exception or return an error value
of your choice. If you need some inspiration, analyze how standard containers behave.
Of course, implement and turn in your own tests to ensure everything works as expected.*/
