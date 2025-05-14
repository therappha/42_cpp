/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:59:32 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/14 17:08:33 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>


Character::Character()
{
	std::cout << "Character created!" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(const std::string& name)
{
	std::cout << "Character with name " << name << " created!" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
	this->setName(name);
}
Character::Character(const Character& other)
{

}
Character::~Character()
{

}
std::string const & Character::getName() const
{

}
void Character::setName(const std::string& name)
{
	std::cout << "Character was assigned the name: " << name << "!" << std::endl;
}
void Character::equip(AMateria* m)
{
	std::cout << "Character equiped the materia: " << m->getType() << "!" << std::endl;

}
void Character::unequip(int idx)
{
	if (idx < 0 && idx > 3)
		return ;
	std::cout << "Character unequiped the materia: " << this->inventory[idx]->getType() << "!" << std::endl;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 && idx > 3)
		return ;
	this->inventory[idx]->use(target);
}
