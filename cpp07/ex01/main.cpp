/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:46:18 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/27 16:53:13 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string.h>


void	halfit(const int &a)
{
	std::cout << a / 2 << std::endl;
}


void	change_student(std::string& student)
{
	student+= "_student";
}

int	main(void)
{
	{
		const int array[] = {20, 10, 30, 42, 13};
		std::cout << "Elements Before: \n";
		iter(array, 5, print_element<const int>);
		std::cout << "\n " << std::endl;


		std::cout << "Elements After: \n";
		iter(array, 5, halfit);
		std::cout << "\n " << std::endl;
	}

	{
		std::string array[] = {"Rafa", "Joao", "Pedro", "Leo", "Maria", "Isa"};
		std::cout << "Elements Before: \n";
		iter(array, 6, print_element<std::string>);
		std::cout << "\n " << std::endl;

		iter(array, 6, change_student);

		std::cout << "Elements After: \n";
		iter(array, 6, print_element<std::string>);
		std::cout << "\n " << std::endl;
	}

	{
		char array[] = {"Hello, World!"};

		std::cout << "Elements before: \n";
		iter(array, 13, print_element<const char>);
		std::cout << "\n " << std::endl;

		iter(array, 13, increment<char>);

		std::cout << "Elements after: \n";
		iter(array, 13, print_element<const char>);
		std::cout << "\n " << std::endl;

	}

}
