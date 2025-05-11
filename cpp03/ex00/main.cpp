/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:44:38 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/11 17:23:19 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	{
		ClapTrap a("Robotzito");

		for (int i = 0; i < 11; i++)
		{
			a.attack("enemy");
		}
		std::cout << std::endl;

		for (int i = 0; i < 3; i++)
		{
			a.takeDamage(2);

		}
		a.beRepaired(6);
		a.attack("otherenemy");

		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		ClapTrap a("Robotzito II");

		for (int i = 0; i < 5; i++)
		{
			a.attack("enemy");
		}
		std::cout << std::endl;

		for (int i = 0; i < 3; i++)
		{
			a.takeDamage(2);

		}
		a.beRepaired(6);
		a.attack("otherenemy");

		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		ClapTrap a("Robotzito III");

		a.takeDamage(11);
		a.takeDamage(1);
		a.attack("enemy");
		a.beRepaired(10);
	}
}
