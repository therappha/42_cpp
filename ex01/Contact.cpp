/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:20:21 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/26 20:37:02 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

using std::string;

string Contact::getName()  const
{
	return (this->_firstName);
}

string	Contact::getLastname() const
{
	return (this->_lastName);
}

string	Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

string	Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}

void	Contact::setName(string name)
{
	this->_firstName = name;
}

void	Contact::setLastname(string last_name)
{
	this->_lastName = last_name;
}

void	Contact::setPhoneNumber(string phone_number)
{
	this->_phoneNumber = phone_number;
}
void	Contact::setDarkestSecret(string darkest_secret)
{
	this->_darkestSecret = darkest_secret;
}
