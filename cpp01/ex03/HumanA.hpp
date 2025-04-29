/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:55:11 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/04/29 01:53:56 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
	private:
		std::string _name;
		Weapon &weapon;

	public:
	HumanA(std::string name, Weapon &getweapon);
	~HumanA();
	void	attack(void);
};

#endif
