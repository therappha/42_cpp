/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:20:21 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/28 23:54:07 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

using std::string;

Contact::Contact()
{

}
Contact::~Contact()
{
	
}

string Contact::getName()  const
{
	return (this->_firstName);
}

string	Contact::getLastname() const
{
	return (this->_lastName);
}

string	Contact::getNickname() const
{
	return (this->_nickName);
}

string	Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

string	Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}

bool	Contact::setName(string name)
{
	if (name.empty())
		return false;
	if (name.length() <= 2 || name.length() > 30)
	{
		std::cout << "First name must have at least 3 characters and max of 30 characters!" << std::endl;
		return false;
	}

	for (size_t i = 0; i < name.length(); i++)
	{
		if (!std::isalpha(name[i]) && !std::isspace(name[i]))
		{
			std::cout << "First name must be composed only of letters!\n" << std::endl;
			return false;
		}
	}
	_firstName = name;
	return true;
}

bool	Contact::setLastname(string last_name)
{
	if (last_name.empty())
		return false;
	if (last_name.length() <= 2 || last_name.length() > 30)
	{
		std::cout << "Last name must have at least 3 characters and max of 30 characters!" << std::endl;
		return false;
	}

	for (size_t i = 0; i < last_name.length(); i++)
	{
		if (!std::isalpha(last_name[i]) && !std::isspace(last_name[i]))
		{
			std::cout << "Last name must be composed only of letters!\n" << std::endl;
			return false;
		}
	}
	_lastName = last_name;
	return true;
}
bool	Contact::setNickname(string nick_name)
{
	if (nick_name.empty())
		return false;
	if (nick_name.length() <= 2 || nick_name.length() > 30)
	{
		std::cout << "Last name must have at least 3 characters and max of 30 characters!" << std::endl;
		return false;
	}

	for (size_t i = 0; i < nick_name.length(); i++)
	{
		if (!std::isalpha(nick_name[i]) && !std::isspace(nick_name[i]))
		{
			std::cout << "Last name must be composed only of letters!\n" << std::endl;
			return false;
		}
	}
	_nickName = nick_name;
	return true;
}

bool	Contact::setPhoneNumber(string phone_number)
{
	if (phone_number.empty())
		return false;
	if (phone_number.length() <= 2 || phone_number.length() > 10)
	{
		std::cout << "phone number must have at least 3 digits and at max 10 digits!!" << std::endl;
		return false;
	}

	for (size_t i = 0; i < phone_number.length(); i++)
	{
		if (!std::isdigit(phone_number[i]))
		{
			std::cout << "Phone number must be composed only by digits!" << std::endl;
			return false;
		}
	}
	_phoneNumber = phone_number;
	return true;
}
bool	Contact::setDarkestSecret(string darkest_secret)
{
	if (darkest_secret.empty())
		return (false);
	if (darkest_secret.length() < 3 || darkest_secret.length() > 30)
	{
		std::cout << "darkest secret must have at least 3 characters and max of 30 characters!" << std::endl;
		return false;
	}
	_darkestSecret = darkest_secret;
	return true;
}
