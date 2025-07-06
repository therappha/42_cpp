/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:32:19 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/04 19:04:35 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

using std::getline;
using std::cout;

void Capitalize(string &str)
{
	if (str.empty())
		return ;
	for (size_t i = 0; i < str.length(); i++)
	{
		str[i] = (char)toupper(str[i]);
	}
}

Contact create_contact()
{
	string	input;

	Contact contact;

	while (!contact.setName(input))
	{
		std::cout << "Please enter your first name: ";
		if (!std::getline(std::cin, input))
		{
			std::cin.clear();
			input.clear();
		}
		std::cout << std::endl;
		Capitalize(input);
	}
	std::cin.clear();
	input.clear();
	while (!contact.setLastname(input))
	{
		std::cout << "Please enter your last name: ";
		std::getline(std::cin, input);
		std::cout << std::endl;
		Capitalize(input);
	}
	input.clear();
	while (!contact.setNickname(input))
	{
		std::cout << "Please enter your nickname: ";
		std::getline(std::cin, input);
		std::cout << std::endl;
		Capitalize(input);
	}
	input.clear();
	while (!contact.setPhoneNumber(input))
	{
		std::cout << "Please enter your phone number: ";
		std::getline(std::cin, input);
		std::cout << std::endl;
	}
	input.clear();
	while (!contact.setDarkestSecret(input))
	{
		std::cout << "Please enter your darkest secret: ";
		std::getline(std::cin, input);
		std::cout << std::endl;
		Capitalize(input);
	}
	return contact;
}

void	print_spaces(string str)
{
	if (str.length() > 10)
	{
		for (int i = 0; i < 9; i++)
		{
			cout << (char)str[i];
		}
		cout << ".";
	}
	else if (str.length() <= 10)
	{
		for (size_t i = 0; i < 10 - str.length(); i++)
			cout << " ";
		cout << str;
	}
}

void	print_column(string index, string name, string lastname, string nickname)
{
	cout << "|";
	print_spaces(index);
	cout << "|";
	print_spaces(name);
	cout << "|";
	print_spaces(lastname);
	cout << "|";
	print_spaces(nickname);
	cout << "|" << std::endl;;
}

void	loop()
{
	Phonebook phonebook;
	string line;
	while (true)
	{
		cout << "You currently have " << phonebook.getCounter() << " contact(s)!" << std::endl;
		cout << "Please enter one of the operations: ADD, SEARCH, EXIT" << std::endl;
		cout << "Operation: ";
		getline(std::cin, line);
		cout << std::endl;
		if (line == "ADD")
		{
			cout << "*---Creating new contact!---*" << std::endl;
			phonebook.AddContact(create_contact());
			cout << "*---Contact created with sucess!---*" << std::endl;
		}
		if (line == "SEARCH")
		{
			if (!phonebook.ShowAll())
				continue ;

		}
		if (line == "EXIT")
		{
			std::cout << "Thank you for using rafaelfe's awesome phonebook!" << std::endl;
			break;
		}
	}
}
int	main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
	{
		cout << "No arguments allowed, execute with ./phonebook" << std::endl;
		return (0);
	}
	cout << "Welcome to rafalfe's awesome Phonebook!" << std::endl;
	loop();
}
