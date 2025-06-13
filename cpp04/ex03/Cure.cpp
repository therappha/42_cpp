/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:59:48 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/26 12:31:17 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure &other)
{
	if (other.getType() == "cure")
	{
		this->type = "cure";
	}
}

Cure::~Cure()
{


}
Cure& Cure::operator = (const Cure& other)
{

}

AMateria* Cure::clone() const
{

}

void Cure::use(ICharacter& target)
{

}
