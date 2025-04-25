/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:32:19 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/25 19:56:51 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::string str;

	for (int i = 1; i < ac; i++)
	{
		str.append(av[i]);
		if (i + 1 < ac)
			str.append(" ");
	}
	for (size_t i = 0; i < str.length(); i++)
	{
		std::cout << (char)std::toupper(str[i]);
	}
	std::cout << std::endl;
}
