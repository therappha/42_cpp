/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:32:25 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/25 20:24:40 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int	main(void)
{
	std::cout << "Creating class" << std::endl;
	Data mydata("Rafael", 22);

	std::cout << "Name: "  << mydata.getName() << "\nAge: " << mydata.getAge() << std::endl;
	std::cout << "Memory:            " << &mydata << std::endl;

	std::cout << "\nSerializing Data" << std::endl;
	uintptr_t mymemory = Serializer::serialize(&mydata);

	std::cout << "\nMemory Serialized: " << mymemory << std::endl;

	Data *thesamedata = Serializer::deserialize(mymemory);

	std::cout << "\nName: "  << thesamedata->getName() << "\nAge: " << thesamedata->getAge() << std::endl;
	std::cout << "Memory:            " << thesamedata << std::endl;

}
