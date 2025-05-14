/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:27:35 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/14 16:01:16 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

private:
	Brain* brain;

protected:

public:
	Dog();
	Dog& operator = (const Dog& other);
	Dog(const Dog& other);
	void makeSound() const;
	~Dog();

	std::string getIdea(unsigned int index) const;
	void setIdea(unsigned int index, const std::string& idea);
};



#endif
