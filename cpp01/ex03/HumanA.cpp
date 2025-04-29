/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:55:01 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/29 01:55:57 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &getweapon) : _name(name), weapon(getweapon)
{
}
HumanA::~HumanA()
{

}
void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->weapon.getType() << std::endl;
}
