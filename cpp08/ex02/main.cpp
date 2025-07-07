/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 21:56:59 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/07 21:35:38 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"
#include <iterator>
#include <list>

 int	main(void)
{

	MutantStack<int> *mystack = new MutantStack<int>;
	MutantStack<int> otherstack;
	std::list<int> mylist;
	MutantStack<int>::iterator it;

	std::stack<int> originalstack;


	for (int i = 0; i <= 42; i++)
	{
		mystack->push(i);
		originalstack.push(i);
		mylist.push_back(i);
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
		std::cout << static_cast<float>(*it)/ 2 << " ";
	}

	std::cout << "\n\nMy list: ";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); it++)
	{
		std::cout << static_cast<float>(*it)/ 2 << " ";
	}
	MutantStack<int> mycopystack(otherstack);
	std::cout << "\n\nmycopy stack: ";
	for (MutantStack<int>::iterator it = mycopystack.begin(); it != mycopystack.end(); it++)
	{
		std::cout << static_cast<float>(*it)/ 2 << " ";
	}

	std::cout << "\n\nThe stacks have a size of: " << otherstack.size() << std::endl;
	std::cout << std::endl;
}

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// 	}
