/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:11:18 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/29 01:12:57 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string typeofweapon)
{
	this->type = typeofweapon;
}
std::string Weapon::getType()
{
	return (this->type);
}
void		Weapon::setType(std::string newtype)
{
	this->type = newtype;
}
