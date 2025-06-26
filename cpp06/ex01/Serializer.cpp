/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:35:34 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/25 20:26:37 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "cannot do it bro" << std::endl;
}
Serializer::~Serializer()
{
	std::cout << "cannot do it bro" << std::endl;
}
Serializer::Serializer(const Serializer& other)
{
	(void)other;
	std::cout << "cannot do it bro" << std::endl;
}
Serializer& Serializer::operator= (const Serializer& other)
{
	(void)other;
	std::cout << "cannot do it bro" << std::endl;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
