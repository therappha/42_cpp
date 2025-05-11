/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 21:44:44 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/11 19:00:01 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default was created!" << std::endl;
	this->_name = "Default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string &name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << name << " was created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " died in combat!" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& other)
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

/*Attacking and repairing each cost 1 energy point. Of course,
ClapTrap can’t do anything if it has no hit points or energy points left.*/
void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap has no energy left to attack!" << std::endl;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap has no hit points therefore cannot attack!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name <<" attacks " << target <<", causing "<< this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap has no energy left to repair itself!" << std::endl;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap has no hit points therefore cannot repair itself!" << std::endl;
	}
	else
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name <<" repairs itself and now has " << this->_hitPoints << " HitPoints"  << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap has no hit points to spare!" << std::endl;
	}

	else if (amount >= this->_hitPoints)
	{
		std::cout << "ClapTrap was attacked and suffered " << this->_hitPoints << " of damage, it has 0 HitPoints left!" << std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap was attacked and suffered " << amount << " of damage, it has " << this->_hitPoints << " HitPoints left!" << std::endl;
	}
}

// ClapTrap <name> attacks <target>, causing <damage> points of damage!
