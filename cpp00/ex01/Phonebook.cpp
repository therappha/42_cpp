/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:46:42 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/27 17:12:28 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	Phonebook::AddContact(Contact contact)
{
	if (contact_counter < 8)
	{
		contacts[contact_counter++] = contact;
		oldest_contact_id = 0;
	}
	else
	{
		contacts[oldest_contact_id] = contact;
		if (oldest_contact_id < 7)
			oldest_contact_id++;
		else
			oldest_contact_id = 0;
	}
}
int Phonebook::getCounter(void) const
{
	return (contact_counter);
}

bool	Phonebook::ShowContact(int index) const
{
	if (index >= 0 && index < contact_counter)
	{
		std::cout << "Name: " << contacts[index].getName() << std::endl;
		std::cout << "Last name: " << contacts[index].getLastname() << std::endl;
		std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
		std::cout << "Phone: " << contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
		return (true);
	}
	else
	{
		return false;
	}
}
bool	Phonebook::ShowAll(void) const
{
	Contact contact;
	string	index;

	if (contact_counter == 0)
	{
		std::cout << "Please add at least one contact before requesting a search!" << std::endl;
		return (false);
	}
	print_column("----------", "----------", "----------", "----------");
	print_column("INDEX", "NAME", "LAST NAME", "NICKNAME");
	for (int i = 0; i < contact_counter; i++)
	{

		print_column("----------", "----------", "----------", "----------");
		index = (char)i + 1 + '0';
		print_column(index, contacts[i].getName(), contacts[i].getLastname(), contacts[i].getNickname());
	}
	print_column("----------" , "----------", "----------", "----------");
	index.clear();

	while (index.length() != 1 && !std::isdigit(index[0]))
	{
		std::cout << "Please select one of the contact index: ";
		std::getline(std::cin, index);
		std::cout << std::endl;
	}

	if (!ShowContact(index[0] - '0' - 1))
		std::cout << "Contact ID does not exist" << std::endl;

	std::cout << std::endl;
	return true;
}

Contact		Phonebook::getContact(int index) const
{
	return (contacts[index]);
}
