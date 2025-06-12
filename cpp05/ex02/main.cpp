/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:06:25 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/12 16:59:02 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

int	main(void)
{
	{
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Test 1, Grade below the minimum: " << std::endl;
		try
		{

		}
		catch(const std::exception& e)
		{
			std::cout << "exception: \n";
			std::cout << e.what() << std::endl;
		}
	}

}
