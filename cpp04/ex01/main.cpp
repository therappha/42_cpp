/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 21:45:47 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/29 14:41:27 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	
	const Animal* j = new Dog();
	const Animal* k = new Cat();

	delete j;
	delete k;

	Animal *animals[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
		{
			animals[i] = new Dog();
		}
		else
		{
			animals[i] = new Cat();
		}
	}

	for (int i = 0; i < 100; i++)
	{
		animals[i]->makeSound();
	}

	for (int i = 0; i < 100; i++)
	{
		delete animals[i];
	}
	
	Dog *cao = new Dog();
	Dog *cachorro = new Dog();

	cachorro->setIdea(0, "Comer sapato");
	std::cout << "cachorro is thinking of " << cachorro->getIdea(0) << std::endl;
	*cao = *cachorro;
	Dog *cao2 = new Dog(*cachorro);

	std::cout << "cao is thinking of " << cao->getIdea(0) << std::endl;
	delete cachorro;

	std::cout << "deleted cachorro" << std::endl;
	std::cout << "cao is thinking of " << cao->getIdea(0) << std::endl;
	std::cout << "cao2 is thinking of " << cao2->getIdea(0) << std::endl;

	delete cao;
	delete cao2;

	Cat *miau = new Cat();
	Cat *garfield = new Cat();

	garfield->setIdea(0, "Comer Lasanha");
	std::cout << "garfield is thinking of " << garfield->getIdea(0) << std::endl;
	*miau = *garfield;
	Cat *miau2 = new Cat(*garfield);

	std::cout << "miau is thinking of " << miau->getIdea(0) << std::endl;
	delete garfield;

	std::cout << "deleted garfield" << std::endl;
	std::cout << "miau is thinking of " << miau->getIdea(0) << std::endl;
	std::cout << "miau2 is thinking of " << miau2->getIdea(0) << std::endl;

	delete miau;
	delete miau2;
	return 0;

}
