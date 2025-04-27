/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:32:19 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/27 01:37:08 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;
using std::toupper;
using std::cout;
using std::endl;

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	string str;

	for (int i = 1; i < ac; i++)
	{
		str.append(av[i]);
		if (i + 1 < ac)
			str.append(" ");
	}
	for (size_t i = 0; i < str.length(); i++)
	{
		str[i] = (char)toupper(str[i]);
	}
	cout << endl;
}
