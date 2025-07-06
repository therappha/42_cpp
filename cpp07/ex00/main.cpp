/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:29:20 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/05 18:57:20 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int	main(void)
{
	{
		int	a = 5;
		int b = 2;


		std::cout << "before swap: "<< a << ", " << b << std::endl;
		swap(a, b);
		std::cout << "after swap: "<< a << ", " << b << std::endl;
		swap(a, b);
		std::cout << "swap again: "<< a << ", " << b << std::endl;


		std::cout << "min between a and b is: " << min(a, b) << std::endl;
		std::cout << "max between a and b is: " << max(a, b) << std::endl;
	}

	{
		float a = 5.12421;
		float b = 2.13213;


		std::cout << "before swap: "<< a << ", " << b << std::endl;
		swap(a, b);
		std::cout << "after swap: "<< a << ", " << b << std::endl;
		swap(a, b);
		std::cout << "swap again: "<< a << ", " << b << std::endl;


		std::cout << "min between a and b is: " << min(a, b) << std::endl;
		std::cout << "max between a and b is: " << max(a, b) << std::endl;
	}

	{
		long long a = 3213213213213;
		long long b = 123123213123;


		std::cout << "before swap: "<< a << ", " << b << std::endl;
		swap(a, b);
		std::cout << "after swap: "<< a << ", " << b << std::endl;
		swap(a, b);
		std::cout << "swap again: "<< a << ", " << b << std::endl;


		std::cout << "min between a and b is: " << min(a, b) << std::endl;
		std::cout << "max between a and b is: " << max(a, b) << std::endl;
	}



}
