/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:06:25 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/11 19:26:33 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 1, Grade below the minimum: " << std::endl;
		try
		{
			Form form("Some burocracy", 151, 20);
			std::cout << form << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 2, Grade above the minimum: " << std::endl;
		try
		{
			Form form("Some burocracy", 0, 20);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 3, He is the best: " << std::endl;
		try
		{
			Bureaucrat bureaucrat("Jair", 66);
			bureaucrat.incrementGrade();
			Form form("Some burocracy", 65, 20);
			std::cout << form << std::endl;
			bureaucrat.signForm(form);
			std::cout << form << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 4, Who is this peasant?: " << std::endl;
		try
		{
			Bureaucrat bureaucrat("The fool", 150);
			Form form("Some document", 75, 20);
			std::cout << "Created " << bureaucrat << std::endl;
			std::cout << form << std::endl;
			bureaucrat.signForm(form);
			std::cout << form << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}
  {
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 5, signing again????: " << std::endl;
		try
		{
			Bureaucrat bureaucrat("Some Pimp", 75);
			Form form("Some document", 75, 20);
			std::cout << "Created " << bureaucrat << std::endl;
			std::cout << form << std::endl;
			bureaucrat.signForm(form);
			bureaucrat.signForm(form);
			std::cout << form << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}
  
  {
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 6, Sir, can you please repeat the name of the form?: " << std::endl;
		try
		{
			Bureaucrat bureaucrat("Some Pimp", 75);
			Form form("", 75, 20);
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
  }
}
