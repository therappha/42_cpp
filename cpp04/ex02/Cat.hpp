/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:27:35 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/14 16:01:08 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

private:
	Brain* brain;

protected:

public:
	Cat();
	Cat& operator = (const Cat& other);
	Cat(const Cat& other);
	void makeSound() const;
	~Cat();

	std::string getIdea(unsigned int index) const;
	void setIdea(unsigned int index, const std::string& idea);
};



#endif
