/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:06:32 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/26 12:30:58 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
class Cure : AMateria
{

private:

public:
	Cure();
	Cure(const Cure &other);
	~Cure();
	Cure& operator = (const Cure& other);
	AMateria* clone() const;
	void use(ICharacter& target);

};


#endif
