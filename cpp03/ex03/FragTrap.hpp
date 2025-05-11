/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:26:08 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/11 19:19:16 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{

private:
	FragTrap(const FragTrap& other); // copy constructor
	FragTrap& operator = (const FragTrap& other); // copy assigment operator

public:
	FragTrap(); //default constructor
	~FragTrap();
	FragTrap(const std::string& name); // constructor
	void highFivesGuys(void);
};

#endif
