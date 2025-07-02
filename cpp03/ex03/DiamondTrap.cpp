/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:53:41 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/07/01 14:17:13 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap("default_clap_name"), FragTrap("default_clap_name")
{
	std::cout << "DiamondTrap default was created!" << std::endl;
	this->_name = "default";
	this->_energyPoints = 50;
	ClapTrap::setName(this->_name + "_clap_name");
}
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap "<< name << " was created!" << std::endl;
	this->_name = name;
	this->_energyPoints = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	*this = other;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap "<< this->_name <<" was destroyed!" << std::endl;
}
DiamondTrap& DiamondTrap::operator = (const DiamondTrap& other)
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

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->_name << "!" << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::getName() << "!" << std::endl;
}
