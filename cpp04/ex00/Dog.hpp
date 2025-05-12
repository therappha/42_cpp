/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:27:35 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/12 21:48:13 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal{

private:
	Dog& operator = (const Dog& other);
	Dog(const Dog& other);

protected:

public:
	Dog();
	void makeSound() const;
	~Dog();

};



#endif
