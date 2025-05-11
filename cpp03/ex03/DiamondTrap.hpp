/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:43:56 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/11 19:13:23 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{

private:
	std::string _name;
	DiamondTrap(); //default constructor
	DiamondTrap(const DiamondTrap& other); // copy constructor
	DiamondTrap& operator = (const DiamondTrap& other); // copy assignment operator

public:
	DiamondTrap(const std::string& name);
	~DiamondTrap();
	void whoAmI();
};

#endif
