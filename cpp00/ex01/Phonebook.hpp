/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:02:19 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/11 17:12:38 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

void	print_column(string index, string name, string lastname, string nickname);

class Phonebook
{
	private:
		Contact	contacts[8];
		int		oldest_contact_id;
		int		contact_counter;

	public:
		void		AddContact(Contact contact);
		bool		ShowAll(void) const;
		bool		ShowContact(int index) const;
		int			getCounter() const;
		Contact		getContact(int index) const;
		Phonebook();
		~Phonebook();
};

#endif

