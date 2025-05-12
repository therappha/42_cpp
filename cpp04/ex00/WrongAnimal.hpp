/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:51:24 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/12 21:49:32 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <string>
#include <iostream>


class WrongAnimal{

private:
	WrongAnimal(const WrongAnimal& other); //copy constructor

protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal& operator = (const WrongAnimal& other);
	~WrongAnimal();
	std::string getType() const;
	void makeSound() const;
};




#endif
