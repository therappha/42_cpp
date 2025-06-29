/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:50:17 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/11 18:23:41 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	{
		ScavTrap a("Robotzito");

		for (int i = 0; i < 51; i++)
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
		ScavTrap a("Robotzito II");

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
		ScavTrap a("Robotzito III");

		a.takeDamage(100);
		a.takeDamage(1);
		a.attack("enemy");
		a.beRepaired(10);
		a.guardGate();
	}
}


