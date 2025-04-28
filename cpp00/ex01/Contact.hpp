/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:55:36 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/28 23:53:30 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <string>
#include <iostream>
#include <cctype>

using std::string;


//first name, last name, nickname, phone number, and darkest secret. A saved contact can’t have empty fields.

// the constructor can also be done this way!;
/*Contact(string name, string surname, string nick, string number, string secret)
{
	_firstName = name;
	_lastName = surname;
	_nickName = nick;
	_phoneNumber = number;
	_darkestSecret = secret;
}*/

class Contact
{
	private:
		string _firstName;
		string _lastName;
		string _nickName;
		string _phoneNumber;
		string _darkestSecret;

	public:
		Contact();
		~Contact();

		string	getName() const;
		string	getLastname() const;
		string	getNickname() const;
		string	getPhoneNumber() const;
		string	getDarkestSecret() const;

		bool	setName(string name);
		bool	setLastname(string last_name);
		bool	setNickname(string nick_name);
		bool	setPhoneNumber(string phone_number);
		bool	setDarkestSecret(string darkest_secret);
};



#endif
