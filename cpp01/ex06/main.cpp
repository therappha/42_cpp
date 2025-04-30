/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:44:08 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/30 16:03:15 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
	{
		std::cout << "usage: ./harlFilter <LEVEL>" << std::endl;
		return 0;
	}
	harl.complain(av[1]);
}
