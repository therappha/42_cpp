/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 21:56:59 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/06 21:26:27 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"
#include <iterator>

int	main(void)
{

	MutantStack<int> *mystack = new MutantStack<int>;
	MutantStack<int> otherstack;

	MutantStack<int>::iterator it;

	std::stack<int> originalstack;


	for (int i = 0; i <= 42; i++)
	{
		mystack->push(i);
		originalstack.push(i);
	}
	otherstack = *mystack;
	std::cout << "MyStack: ";

	for (MutantStack<int>::iterator it = mystack->begin(); it != mystack->end(); it++)
	{
		std::cout << *it << " ";
	}
	delete mystack;
	std::cout << "\n\nOtherStack: ";
	for (MutantStack<int>::iterator it = otherstack.begin(); it != otherstack.end(); it++)
	{
		std::cout << *it / 2 << " ";
	}

	MutantStack<int> mycopystack(otherstack);
	std::cout << "\n\nOtherStack: ";
	for (MutantStack<int>::iterator it = mycopystack.begin(); it != mycopystack.end(); it++)
	{
		std::cout << *it / 2 << " ";
	}

	std::cout << "\n\nThe stacks have a size of: " << otherstack.size() << std::endl;
	std::cout << std::endl;
}

