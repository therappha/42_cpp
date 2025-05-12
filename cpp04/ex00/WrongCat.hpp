/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:27:35 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/12 21:50:11 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

private:
	WrongCat& operator = (const WrongCat& other);
	WrongCat(const WrongCat& other);

protected:

public:
	WrongCat();
	void makeSound() const;
	~WrongCat();

};



#endif
