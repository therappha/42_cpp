/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:29:16 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/26 17:07:31 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
template <typename T>
void	swap(T& a, T& b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}



template <typename T>
T max (T a, T b)
{

	return (a > b ? a : b);
}
