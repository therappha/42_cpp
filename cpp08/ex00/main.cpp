/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:43:12 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/06 18:55:21 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int	main(void)
{
	int array[6] = {0, 1, 2 , 3 , 4, 5};
	const std::vector<int> myvector(array, array + 6);
	try
	{
		for (int i = 5; i > -5; i--)
		{
			std::vector<int>::const_iterator it = easyFind(myvector, i);
			std::cout << "value is: " <<  *it << std::endl;
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	int c;
	std::list<int> mylist;

	for (int i = 0; i < 100; i++)
	{
		mylist.push_back(i);
		std::list<int>::iterator it = easyFind(mylist, i);

		std::cout << *it << " ";
	}
	std::cout << std::endl << std::endl;

	try
	{
		for (int i = 95; i < 1000 ; i++)
		{
			c = *easyFind(mylist, i);
			std::cout << "value is: " << c << std::endl;
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::deque<int> mydeque;

	mydeque.push_back(0);
	mydeque.push_back(1);

	std::deque<int>::iterator it;
	it = easyFind(mydeque, 1);

	std::cout << "Deque num is " << *it << std::endl;

	try
	{
		it = easyFind(mydeque, -1);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}
