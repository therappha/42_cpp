/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:53:51 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/26 12:22:03 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource{

private:

	MateriaSource&	operator = (const MateriaSource& other);
	AMateria* templates[4];

public:

	MateriaSource();
	MateriaSource(const MateriaSource& other);
	~MateriaSource();

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);


};



#endif
