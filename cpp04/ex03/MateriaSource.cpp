/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:53:50 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/14 17:14:50 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	std::cout << "Created new MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->templates[i] = NULL;
	}
}
MateriaSource::MateriaSource(const MateriaSource& other)
{

}
MateriaSource::~MateriaSource()
{

}

MateriaSource&	MateriaSource::operator = (const MateriaSource& other)
{

}

void	MateriaSource::learnMateria(AMateria*)
{

}

AMateria*	MateriaSource::createMateria(std::string const & type)
{

}
