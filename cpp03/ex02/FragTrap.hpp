/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:26:08 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/11 18:42:26 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

private:
	FragTrap(); //default constructor
	FragTrap(const FragTrap& other); // copy constructor
	FragTrap& operator = (const FragTrap& other); // copy assigment operator

public:
	~FragTrap();
	FragTrap(const std::string& name); // constructor
	void highFivesGuys(void);
};

#endif
