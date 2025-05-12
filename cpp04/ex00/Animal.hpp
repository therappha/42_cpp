/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:51:24 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/12 22:09:34 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>


class Animal{

private:
	Animal(const Animal& other); //copy constructor

protected:
	std::string type;

public:
	Animal();
	Animal& operator = (const Animal& other);
	virtual ~Animal();
	std::string getType() const;
	virtual void makeSound() const;
};




#endif
