/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 20:40:28 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/26 15:22:55 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Identify.hpp"

int main(void)
{
	srand (time(NULL));
	Base* randomclass = generate();

	identify(randomclass);
	delete randomclass;

	A a;
	B b;
	C c;
	Base base;
	
	identify(a);
	identify(b);
	identify(c);
	identify(base);
}
