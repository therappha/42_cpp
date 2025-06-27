/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:45:54 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/27 16:53:19 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template <typename T, typename F>
void	iter(T* array,  std::size_t length, F f)
{
	for (size_t i = 0; i < length; i++)
	{
		f(array[i]);
	}
}

template <typename T>
void	print_element(T& element)
{
	std::cout << element << std::endl;
}

template <typename T>
void	increment(T& element)
{
	element++;
}

/*Implement a function template iter that takes 3 parameters and returns nothing.
• The first parameter is the address of an array.
• The second one is the length of the array.
• The third one is a function that will be called on every element of the array*/
