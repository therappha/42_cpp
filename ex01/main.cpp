/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:32:19 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/26 20:45:54 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int	main(int ac, char **av)
{

	(void)av;
	if (ac > 1)
	{
		std::cout << "No arguments allowed, execute with ./phonebook" << std::endl;
		return (0);
	}
}
