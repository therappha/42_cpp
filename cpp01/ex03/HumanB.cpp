/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:29:02 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/29 02:03:45 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{

}
void HumanB::attack()
{
	if (weapon)
		std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon to attack with!" << std::endl;
}
void HumanB::setWeapon(Weapon& newweapon)
{
	this->weapon = &newweapon;
}
