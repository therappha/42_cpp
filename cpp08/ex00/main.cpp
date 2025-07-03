/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:43:12 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/03 21:34:37 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"
#include <algorithm>
#include <iostream>
#include <vector>

int	main(void)
{
	std::vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);

	int b;
	try
	{
	b = *easyfind(a, 0);
	std::cout << b << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}





}
