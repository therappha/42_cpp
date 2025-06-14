/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:06:25 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/14 17:22:37 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

int	main(void)
{

	std::srand(std::time(NULL)); //random for robotomy

	std::cout << "*--------------------- ShrubberyCreationForm Tests ---------------------*" << std::endl;
	{
		std::cout << std::endl;
		std::cout << "ShrubberyCreationForm: Test 1, Do we really need all those trees?: " << std::endl;
		Bureaucrat burocrata("Greta", 130);
		ShrubberyCreationForm form("Someothergarden");
		burocrata.signForm(form);
		burocrata.executeForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "ShrubberyCreationForm: Test 2, Sir, the form has to be signed: " << std::endl;
		Bureaucrat burocrata("John Coisado", 130);
		ShrubberyCreationForm form("seujardim");
		burocrata.executeForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "ShrubberyCreationForm: Test 3, you don't have the power to do this: " << std::endl;
		Bureaucrat burocrata("Pedro the First", 146);
		ShrubberyCreationForm form("Meujardmi");
		burocrata.signForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "ShrubberyCreationForm: Test 4, we need someone better: " << std::endl;
		Bureaucrat burocrata("Some Low Level", 144);
		ShrubberyCreationForm form("Garden");
		burocrata.signForm(form);
		burocrata.executeForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "ShrubberyCreationForm: Test 5, Do we really need two people for this?!: " << std::endl;
		Bureaucrat lowlevel("Oh, Poor Guy", 145);
		Bureaucrat richguy("Oh, Less Poor Guy", 138);
		ShrubberyCreationForm form("Gardenizacao");
		lowlevel.signForm(form);
		lowlevel.executeForm(form);
		richguy.executeForm(form);
		richguy.incrementGrade();
		richguy.executeForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "ShrubberyCreationForm: Test 6, He can't do nothing!: " << std::endl;
		Bureaucrat burocrata("Oh, Poor Guy", 150);
		ShrubberyCreationForm form("trees everywhere");
		burocrata.signForm(form);
		burocrata.executeForm(form);
	}

	{
		std::cout << std::endl;

		std::cout << "ShrubberyCreationForm: Test 7, Targetless Form's arent a thing here: " << std::endl;
		try
		{
			Bureaucrat burocrata("Some Low Level", 130);
			ShrubberyCreationForm form(""); // < no name in the form
			burocrata.signForm(form);
			burocrata.executeForm(form);
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

std::cout << "\n*--------------------- RobotomyRequestForm Tests ---------------------*" << std::endl;
	for (int i = 0; i < 2; i++)
	{
		{
			std::cout << std::endl;
			std::cout << "RobotomyRequestForm: Test 1, Sorry, you will robotimize who?: " << std::endl;
			Bureaucrat burocrata("Doctor Robotomy", 46);
			RobotomyRequestForm form("Michael Jackson");
			burocrata.signForm(form);
			burocrata.executeForm(form);
			burocrata.incrementGrade();
			burocrata.executeForm(form);
		}
	}

	{
		std::cout << std::endl;
		std::cout << "RobotomyRequestForm: Test 2, Sir, the form has to be signed: " << std::endl;
		Bureaucrat burocrata("Doctor Vegapunk", 45);
		RobotomyRequestForm form("Kuma");
		burocrata.executeForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "RobotomyRequestForm: Test 3, you don't have the power to do this: " << std::endl;
		Bureaucrat burocrata("Homeless guy", 146);
		RobotomyRequestForm form("Franky");
		burocrata.signForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "RobotomyRequestForm: Test 4, we need someone better: " << std::endl;
		Bureaucrat burocrata("Some Low Level", 80);
		RobotomyRequestForm form("Confident Guy");
		burocrata.signForm(form);
		burocrata.executeForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "RobotomyRequestForm: Test 5, Do we really need two people for this?!: " << std::endl;
		Bureaucrat lowlevel("Vegapunk", 72);
		Bureaucrat richguy("Gorosei guy", 46);
		RobotomyRequestForm form("Bartholomew Kuma");
		lowlevel.signForm(form);
		lowlevel.executeForm(form);
		richguy.executeForm(form);
		richguy.incrementGrade();
		richguy.executeForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "RobotomyRequestForm: Test 6, He can't do nothing!: " << std::endl;
		Bureaucrat burocrata("Oh, Poor Guy", 150);
		RobotomyRequestForm form("form");
		burocrata.signForm(form);
		burocrata.executeForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "RobotomyRequestForm: Test 7, Targetless Form's arent a thing here: " << std::endl;
		try
		{
			Bureaucrat burocrata("Some random Marine", 70);
			RobotomyRequestForm form(""); // < no name in the form
			burocrata.signForm(form);
			burocrata.executeForm(form);
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}
		std::cout << "\n*--------------------- PresidentialPardonForm Tests ---------------------*" << std::endl;
	{
		std::cout << std::endl;
		std::cout << "PresidentialPardonForm: Test 1, You need to sign first!: " << std::endl;
		Bureaucrat burocrata("Almost President", 2);
		PresidentialPardonForm form("Arthur Dent");
		burocrata.executeForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "PresidentialPardonForm: Test 2, You don't have enough power: " << std::endl;
		Bureaucrat burocrata("Low Level", 25);
		PresidentialPardonForm form("Ford Prefect");
		burocrata.signForm(form);
		burocrata.executeForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "PresidentialPardonForm: Test 3, Now with the right grade: " << std::endl;
		Bureaucrat burocrata("Big Boss", 2);
		PresidentialPardonForm form("Trillian");
		burocrata.signForm(form);
		burocrata.executeForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "PresidentialPardonForm: Test 4, Targetless Form's arent a thing here: " << std::endl;
		try
		{
			Bureaucrat burocrata("President", 1);
			PresidentialPardonForm form("");
			burocrata.signForm(form);
			burocrata.executeForm(form);
		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl;
		std::cout << "PresidentialPardonForm: Test 5, Do we need two presidents?: " << std::endl;
		Bureaucrat lowlevel("Vice President", 6);
		Bureaucrat president("President", 1);
		PresidentialPardonForm form("Leo Lins");
		lowlevel.signForm(form);
		lowlevel.executeForm(form);
		president.executeForm(form);
	}

	{
		std::cout << std::endl;
		std::cout << "PresidentialPardonForm: Test 6, Can't do nothing!: " << std::endl;
		Bureaucrat burocrata("Oh, Poor Guy", 150);
		PresidentialPardonForm form("Random Target");
		burocrata.signForm(form);
		burocrata.executeForm(form);
	}
	{
		std::cout << std::endl;
		std::cout << "PresidentialPardonForm: Test 7, Incrementing Bureaucrat's Grade: " << std::endl;
		Bureaucrat burocrata("Flexible Politician", 6);
		PresidentialPardonForm form("Ford Prefect");
		burocrata.signForm(form);
		burocrata.executeForm(form);
		burocrata.incrementGrade();
		burocrata.executeForm(form);
	}
}
