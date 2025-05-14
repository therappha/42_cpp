/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:15:36 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/13 20:22:39 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria {

private:

protected:
	std::string type;
	AMateria& operator = (const AMateria& other);
public:
	AMateria();
	virtual ~AMateria();
	AMateria(const AMateria& other);
	AMateria(std::string const & type);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
