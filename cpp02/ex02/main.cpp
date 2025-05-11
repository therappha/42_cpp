/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:40:24 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/09 19:38:13 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;

}

/*
int main()
{
	Fixed a;                    // default constructor
	Fixed b(5);                 // int constructor
	Fixed c(3.14f);             // float constructor
	Fixed d = b;                // copy constructor

	std::cout << "a (default): " << a << std::endl;
	std::cout << "b (int 5): " << b << std::endl;
	std::cout << "c (float 3.14): " << c << std::endl;
	std::cout << "d (copy of b): " << d << std::endl;

	std::cout << "\n--- Arithmetic ---" << std::endl;
	std::cout << "b + c = " << (b + c) << std::endl;
	std::cout << "b - c = " << (b - c) << std::endl;
	std::cout << "b * c = " << (b * c) << std::endl;
	std::cout << "b / c = " << (b / c) << std::endl;
		std::cout << "\n--- Arithmetic ---" << std::endl;
	std::cout << "b + c = " << (b + c) << std::endl;
	std::cout << "b - c = " << (b - c) << std::endl;
	std::cout << "b * c = " << (b * c) << std::endl;
	std::cout << "b / c = " << (b / c) << std::endl;

	std::cout << "\n--- Comparisons ---" << std::endl;
	std::cout << "b > c? " << (b > c) << std::endl;
	std::cout << "b < c? " << (b < c) << std::endl;
	std::cout << "b == d? " << (b == d) << std::endl;

	std::cout << "\n--- Increment / Decrement ---" << std::endl;
	Fixed e;
	std::cout << "e: " << e << std::endl;
	std::cout << "++e: " << ++e << std::endl;
	std::cout << "e++: " << e++ << std::endl;
	std::cout << "e now: " << e << std::endl;
	std::cout << "--e: " << --e << std::endl;
	std::cout << "e--: " << e-- << std::endl;
	std::cout << "e now: " << e << std::endl;

	std::cout << "\n--- Min / Max ---" << std::endl;
	std::cout << "min(b, c): " << Fixed::min(b, c) << std::endl;
	std::cout << "max(b, c): " << Fixed::max(b, c) << std::endl;

	return 0;
}
*/

