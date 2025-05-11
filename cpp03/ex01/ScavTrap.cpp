/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:25:32 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/11 18:39:08 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default was created!" << std::endl;
	this->_name = "default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}
ScavTrap::ScavTrap(const std::string& name)
{
	std::cout << "ScavTrap " << name <<  " was created!" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}
ScavTrap::ScavTrap(const ScavTrap& other)
{
	*this = other;
}
ScavTrap& ScavTrap::operator = (const ScavTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}
void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap has no energy left to attack!" << std::endl;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap has no hit points therefore cannot attack!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name <<" attacks " << target <<", causing "<< this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " was destroyed while fighting!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap "<< this->_name << " is now in Gate keeper mode." << std::endl;
}
