/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:02:19 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/26 21:00:40 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact	contacts[8];
		int		oldest_contact_id;
		int		contact_counter;

	public:
		void	AddContact(Contact contact);
		void	ShowAll(void);
		void	SearchIndex(int index);
		Phonebook()
		{
			contact_counter = -1;
			oldest_contact_id = -1;
		}
		~Phonebook() {}
};

