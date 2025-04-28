/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:20:59 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/29 00:25:40 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie* horde;
	int		horde_size = 10;

	horde = zombieHorde(horde_size, "Putrefácio");

	for (int i = 0; i < horde_size; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}
