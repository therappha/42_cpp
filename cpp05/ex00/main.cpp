/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:06:25 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/10 19:18:03 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 1, empty name: " << std::endl;
		try
		{
			Bureaucrat("", 150);
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 2, grade too low: " << std::endl;
		try
		{
			Bureaucrat("Some Pimp", 151);
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 3, grade too high: " << std::endl;
		try
		{
			Bureaucrat("Other Pimp", 0);
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 4, incrementing too much: " << std::endl;
		try
		{
			Bureaucrat burocrata("Another Pimp", 3);
			burocrata.incrementGrade();
			burocrata.incrementGrade();

			std::cout << burocrata << std::endl;
			burocrata.incrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 5, why? he is already so low: " << std::endl;
		try
		{
			Bureaucrat burocrata("Another Pimp", 148);
			burocrata.decrementGrade();
			burocrata.decrementGrade();

			std::cout << burocrata << std::endl;
			burocrata.decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 5, why? he is already so low: " << std::endl;
		try
		{
			Bureaucrat burocrata("Pitiful man", 148);
			burocrata.decrementGrade();
			burocrata.decrementGrade();

			std::cout << burocrata << std::endl;
			burocrata.decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 6, some filthy values. " << std::endl;
		try
		{
			Bureaucrat burocrata("I dont care about grades ", 123123123);
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

		{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 7, some more filthy values. " << std::endl;
		try
		{
			Bureaucrat burocrata("I dont care about grades ", -13213123);
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

}
