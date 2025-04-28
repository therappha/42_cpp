/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:33:06 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/29 00:45:15 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;


int	main(void)
{
	string brain = "HI THIS IS BRAIN";
	string *stringPTR = &brain;
	string& stringREF = brain;

	std::cout << "Memory of string: '" << &brain << "'" << std::endl;
	std::cout << "Memory of stringPTR: '" << stringPTR << "'" << std::endl;
	std::cout << "Memory of stringREF: '" << &stringREF << "'" << std::endl;
	std::cout << std::endl;
	std::cout << "Value of string: '" << brain << "'" << std::endl;
	std::cout << "Value of stringPTR: '" << *stringPTR << "'" << std::endl;
	std::cout << "Value of stringREF: '" << stringREF << "'" << std::endl;


}
