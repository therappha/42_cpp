/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:44:05 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/22 19:29:22 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "invalid number of arguments" << std::endl;
		return (0);
	}
	try
	{

		ScalarConverter::convert(av[1]);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
