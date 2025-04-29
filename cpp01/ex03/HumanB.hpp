/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:57:38 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/29 01:59:16 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"
class HumanB
{
	private:
		std::string _name;
		Weapon *weapon;

	public:
		HumanB(std::string name);
		~HumanB();
		void	attack(void);
		void setWeapon(Weapon& newweapon);
};

#endif
