/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 02:14:45 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/28 15:27:35 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string filename;
	std::string newfile;
	std::string oldword;
	std::string replace;
	std::string line;
	std::ifstream input;
	std::ofstream output;

	if (argc != 4 )
	{
		std::cerr << "Error! Usage: <filename> <string to replace> <replacement>" << std::endl;
		return (0);
	}

	filename = argv[1];
	newfile = filename + ".replace";
	oldword = argv[2];
	replace = argv[3];

	if ((filename.empty() || oldword.empty() || replace.empty()))
	{
		std::cerr << "Error! None of the fields can be empty!" << std::endl;
		return (0);
	}
	input.open(filename.c_str());
	if (input.fail())
	{
		std::cout << "Error opening file" << filename << std::endl;
		return (0);
	}
	output.open(newfile.c_str());
	if (output.fail())
	{
		std::cout << "Error opening file" << filename + ".replace" << std::endl;
		input.close();
		return (0);
	}
	size_t			index;
	while (1)
	{
		std::getline(input, line);
		if (input.eof())
			break;
		while (1)
		{
			index = line.find("0x", 0);
			if (index == std::string::npos)
				break;
			int newindex;
			for (newindex = index; line[newindex] != ' '; newindex++)
			{

			}
			line.erase(index, newindex - 1);

		}
		output << line << std::endl;
		line.clear();
	}
	input.close();
	output.close();
}
