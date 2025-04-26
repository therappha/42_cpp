/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:55:36 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/26 20:33:41 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <string>
#include <iostream>

using std::string;


//first name, last name, nickname, phone number, and darkest secret. A saved contact can’t have empty fields.
class Contact
{
	private:
		string _firstName;
		string _lastName;
		string _nickName;
		string _phoneNumber;
		string _darkestSecret;

	public:
		Contact(){}

		Contact(string name, string surname, string nick, string number, string secret)
		{
			_firstName = name;
			_lastName = surname;
			_nickName = nick;
			_phoneNumber = number;
			_darkestSecret = secret;
		}
		~Contact() {}

		string	getName() const;
		string	getLastname() const;
		string	getPhoneNumber() const;
		string	getDarkestSecret() const;

		void	setName(string name);
		void	setLastname(string last_name);
		void	setPhoneNumber(string phone_number);
		void	setDarkestSecret(string darkest_secret);

};



#endif
