/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:34:55 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/02 21:55:29 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>

template <typename T>
T& easyfind(T &array, int tofind)
{

}
template <typename T>
T& easyfind(const T &array, int tofind)
{

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
