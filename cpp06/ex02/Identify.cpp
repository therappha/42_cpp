/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:40:18 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/26 15:20:15 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Identify.hpp"

Base * generate(void)
{
	int	i = rand() % 3;

	if (i == 0 )
	{
		std::cout << "Created a object of instance \"A\"" << std::endl;
		return (new A);
	}
	if (i == 1)
	{
		std::cout << "Created a object of instance \"B\"" << std::endl;
		return (new B);
	}
	if (i == 2)
	{
		std::cout << "Created a object of instance \"C\"" << std::endl;
		return (new C);
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "Object " << p << "is of type \"A\"" << std::endl;
	}
	else	if (dynamic_cast<B*>(p))
	{
		std::cout << "Object " << p << "is of type \"B\"" << std::endl;
	}
	else	if (dynamic_cast<C*>(p))
	{
		std::cout << "Object " << p << "is of type \"C\"" << std::endl;
	}
	else
	{
		std::cout << "Object " << p << "is not  an instance of \"A\" \"B\" nor \"C\"" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Object " << &p << "is of type \"A\"" << std::endl;
		return ;
	}
	catch(...)
	{

	}

	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Object " << &p << "is of type \"B\"" << std::endl;
		return ;
	}
	catch(...)
	{

	}

	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Object " << &p << "is of type \"C\"" << std::endl;
		return ;

	}
	catch(...)
	{

	}
	std::cout << "Object " << &p << "is not  an instance of \"A\" \"B\" nor \"C\"" << std::endl;

}
