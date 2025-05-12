/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:27:35 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/12 21:50:11 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

private:
	Cat& operator = (const Cat& other);
	Cat(const Cat& other);

protected:

public:
	Cat();
	void makeSound() const;
	~Cat();

};



#endif
